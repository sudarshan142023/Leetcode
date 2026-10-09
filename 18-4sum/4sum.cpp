class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        set<vector<int>> res;

        sort(nums.begin(),nums.end());
        int n=nums.size();

        if(n < 4)
        return {};

        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                long long sum= (long long) nums[i]+nums[j];
                int right=nums.size()-1;
                int left=j+1;

                while(left<right)
                {
                    long long sum1=sum+nums[left]+nums[right];

                    if(sum1==target)
                    {
                        res.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;right--;
                    }
                    else if(sum1<target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }


                }
            }
           

        }
       return vector<vector<int>>(res.begin(), res.end());
    }
};