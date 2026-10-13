class Solution {
public:
    int pivotInteger(int n) 
    {
        int sum=0;

        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }


        int left_sum=0;
        for(int i=1; i<=n; i++)
        {
            left_sum+=i;

            if(left_sum==sum)
            return i;

            sum-=i;

        }

        return -1;
        
    }
};