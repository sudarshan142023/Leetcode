class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int digit=0;
        int mul = 1;
        int orginal = n;

        while(n>0)
        {
            int rem = n%10;

            digit+=rem;
            mul*=rem;

            n=n/10;
        }   

        return  orginal%(digit+mul)==0;   
    }
};