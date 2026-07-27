int maxProduct(int* nums, int numsSize) {

    int i=INT_MIN;
    int j=INT_MIN;

    for(int k=0; k<numsSize; k++)
    {
        if(nums[k]>i)
        {
            j=i; 
            i=nums[k];
        }
        else if(nums[k]>=j)
        {
            j=nums[k];
        }
    }
    
    return (i-1)*(j-1);
}