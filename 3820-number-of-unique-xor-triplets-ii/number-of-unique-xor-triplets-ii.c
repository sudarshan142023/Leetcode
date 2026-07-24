int uniqueXorTriplets(int* nums, int numsSize) {
    
    if (numsSize == 1)
        return 1;

    // nums[i] <= 1500, so XOR is < 2048
    bool pair[2048] = {false};
    bool triplet[2048] = {false};

    // Store all distinct pair XORs
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            pair[nums[i] ^ nums[j]] = true;
        }
    }

    // XOR every pair XOR with every number
    for (int x = 0; x < 2048; x++)
    {
        if (!pair[x])
            continue;

        for (int i = 0; i < numsSize; i++)
        {
            triplet[x ^ nums[i]] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 2048; i++)
    {
        if (triplet[i])
            count++;
    }

    return count;










    // bool seen[2048] = {0};      // Adjust size according to constraints
    // int count = 0;

    // for(int i = 0; i<numsSize; i++)
    // {
    //     for(int j = i; j<numsSize; j++)
    //     {
    //         int pair = nums[i]^nums[j];

    //         for(int k = j; k<numsSize; k++)
    //         {
    //             int x = pair^nums[k];

    //             if(!seen[x])
    //             {
    //                 seen[x] = true;
    //                 count++;;
    //             }
                

    //         }
    //     }


    // }
    
    // return count;
}