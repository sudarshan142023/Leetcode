class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    { 
        double avg=0;
        double sum=0;


        
        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }

        avg=sum;


         for(int i=k; i<nums.size(); i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];

            avg=max(avg,sum);


        }
        return avg/k;
        
    }
};