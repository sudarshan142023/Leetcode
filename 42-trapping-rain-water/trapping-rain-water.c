int trap(int* height, int heightSize) {

   
    int left=0;
    int right=heightSize-1;

    int r_max=0;
    int l_max=0;

    int water=0;

    while(left<right)
    {
        if(height[left]<height[right])
        {
            if(height[left]>=l_max)
            {
                l_max=height[left];
            }
            else
            water += l_max-height[left];

            left++;
        }
        else
        {
            if(height[right]>=r_max)
            {
                r_max = height[right];
            }
            else
            {
                water += r_max-height[right];
            }
            right--;

        }

    }
    return water;

    
}