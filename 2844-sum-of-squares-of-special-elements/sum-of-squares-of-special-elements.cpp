class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        int squre=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(n%(i+1)==0)
            {
                squre+=nums[i]*nums[i];

            }
            
        }
        return squre;
        
    }
};