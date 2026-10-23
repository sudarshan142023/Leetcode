class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int maxSum=nums[0];
        int curMax=nums[0];

        int curMin = nums[0];
        int minSum = nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            curMax = max(nums[i], nums[i]+curMax);
            maxSum = max(maxSum,curMax);

            curMin = min(nums[i], curMin + nums[i]);
            minSum = min(minSum, curMin);
        }

        return max(maxSum,abs(minSum));
        
    }
};