class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        long long left =0;
        long long right =sqrt(c);



        while(left<=right)
        {
            long long squre=(left*left)+(right*right);

            if(squre==c)
            return true;
            else if(squre<c)
            left++;
            else
            right--;
        }

        
        return false;   
    }
}; 