class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int count=2;
        int m_count=2;
        for(int i=2; i<nums.size(); i++)
        {
          

            if(nums[i]==nums[i-1]+nums[i-2])
            {
                count++;
                if(count>m_count)
                m_count=count;
            }
            else
            {
                count=2;
            }

        }
        return m_count;
        
    }
};