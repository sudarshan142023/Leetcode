int thirdMax(int* nums, int numsSize) {

long m1 = LONG_MIN, m2 = LONG_MIN, m3 = LONG_MIN;
    for(int i=0; i<numsSize; i++)
    {
        int n=nums[i];
    
            if(n==m1 || n==m2 || n==m3) 
            continue;

            if(n>m1)
            {
                m3=m2;
                m2=m1;
                m1=n;
            }
            else if(n>m2)
            {
                m3=m2;
                m2=n;
            }
            else if(n>m3)
            {
                m3 = n;
            }
            
        
    }
    return (m3 == LONG_MIN) ? m1 : m3;
}