class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int min=INT_MAX;
        int ans;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++)
        {
            int right=nums.size()-1;; 
            int left=i+1;

            while(left<right)
            {
                int sum = nums[i]+nums[right]+nums[left];

                if(sum<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }

                int diff=abs(sum-target);


                if(diff<min)
                {
                    min=diff;
                    ans=sum;
                }
            }
        }
        
        return ans;
    }
};