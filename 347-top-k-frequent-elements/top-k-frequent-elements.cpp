class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int> mp;
        priority_queue<pair<int,int>> pq;

        for(int i : nums)
        {
            mp[i]++;
        }

        for(auto i : mp)
        {
            pq.push({i.second, i.first});
        }

        vector<int> res;
        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }

};