int trap(int* height, int n)
{
    if(n == 0)
        return 0;

    int leftMax[n];
    int rightMax[n];

    leftMax[0] = height[0];

    for(int i = 1; i < n; i++)
    {
        if(height[i] > leftMax[i-1])
            leftMax[i] = height[i];
        else
            leftMax[i] = leftMax[i-1];
    }

    rightMax[n-1] = height[n-1];

    for(int i = n-2; i >= 0; i--)
    {
        if(height[i] > rightMax[i+1])
            rightMax[i] = height[i];
        else
            rightMax[i] = rightMax[i+1];
    }

    int water = 0;

    for(int i = 0; i < n; i++)
    {
        int minHeight = (leftMax[i] < rightMax[i]) ? leftMax[i] : rightMax[i];

        water += minHeight - height[i];
    }

    return water;
}