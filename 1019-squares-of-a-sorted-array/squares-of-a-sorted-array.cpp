class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> m;
        for(int n : nums)
        {
            m.push_back(n*n);
        }

        sort(m.begin(),m.end());
        return m;
        
    }
};