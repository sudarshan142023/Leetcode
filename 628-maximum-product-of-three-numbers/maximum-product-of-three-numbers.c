int maximumProduct(int* nums, int numsSize) {
int mul=1;
int sign = 1;

int l1=INT_MIN;
int l2=INT_MIN;
int l3=INT_MIN;

int min1=INT_MAX;
int min2=INT_MAX;

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]>=l1)
        {
            l3=l2;
            l2=l1;
            l1=nums[i];   
        }
        else if(nums[i]>=l2)
        {
            l3=l2;
            l2 = nums[i];
        }
        else if(nums[i]>l3)
        {
            l3=nums[i];
        }

    }
    
    for(int i=0; i<numsSize; i++)
    {
            if(nums[i]<min1)
            {
                min2 = min1;
                min1 =nums[i];
            }
            else if(nums[i]<min2)
            {
                min2=nums[i];
            }
    }

           
    // if(numsSize==3)
    // {
    //     for(int i=0; i<numsSize; i++)
    //     {
    //         mul*=nums[i];
    //     }
    //     return mul;
    // }

int max1=l1*l2*l3;
int max2 = min1*min2*l1;

return max1>max2 ? max1 : max2;
    
    
}