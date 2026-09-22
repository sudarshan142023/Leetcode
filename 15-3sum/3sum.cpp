class Solution {
public:


    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;

       sort(nums.begin(),nums.end());
        int n=nums.size();

        int sum=0;

       for(int i=0; i<n; i++)
       {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i+1;
            int right = n-1;


            while(left<right)
            {
                sum = nums[i]+nums[left]+nums[right];

                
                if(sum<0) left++;
                else if(sum>0) right--;
                else
                {
                    res.push_back({nums[i],nums[left],nums[right]});
            
                

                    left++; right--;

                    // Skip duplicate left values
                    while(left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }

                    // Skip duplicate right values
                    while(left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }    

                }

            }

       }
        return res;

    }
};