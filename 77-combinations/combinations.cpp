class Solution {
public:
 vector<vector<int>> res;
    void combi(int n,int k,vector<int>& current,int start)
    {
        if(current.size()==k)
        {
            res.push_back(current);
            return;
        }

        for(int i=start; i<=n; i++)
        {
            current.push_back(i);
               
            combi(n,k,current,i+1);

            current.pop_back();
            
        }
    }

    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> current;

        combi(n,k,current,1);

        return res;
    }
};