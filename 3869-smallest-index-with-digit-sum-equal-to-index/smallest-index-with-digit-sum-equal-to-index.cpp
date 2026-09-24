class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int small=INT_MAX;
        int found = 0;

        for(int i=0; i<nums.size(); i++)
        {
            int num = nums[i];

            int sum=0;
            while(num!=0)
            {
                sum+= num%10;
                num/=10;
            }

            if(i==sum && sum<small)
            {
                found=1;
                small = sum;
            }

        }

    if(found)
    return small;

    return -1;
        
    }
};