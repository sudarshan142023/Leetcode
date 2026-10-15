class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int sum=0;

        for(int i=0; i<nums.size(); i++)
        {
            set<int> res;

            for(int j=i; j<nums.size(); j++)
            {
                res.insert(nums[j]);

                int count=res.size();

                sum+=count*count;
            }   
        }

    return sum;
        
    }
};