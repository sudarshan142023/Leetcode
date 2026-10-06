class Solution {
public:

priority_queue<int> pq;

    int lastStoneWeight(vector<int>& stones) 
    {
        for(int i : stones)
        {
            pq.push(i);
        }

        while(pq.size()>1)
        {
            int l1 = pq.top();
            pq.pop();

            int l2 = pq.top();
             pq.pop();
            
            int diff = l1-l2;

            
            pq.push(diff);
            
            

        }

        return pq.top();
        
    }
};