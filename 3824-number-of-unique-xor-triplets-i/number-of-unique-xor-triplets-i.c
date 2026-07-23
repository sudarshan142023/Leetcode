int uniqueXorTriplets(int* nums, int numsSize) {


    if(numsSize<3)
    {
        return numsSize;
    }

    int ans = 1;

    while(ans <= numsSize)      //calculate th bits size and 2 power of bits
    ans<<=1;

    return ans;





// int max = numsSize*numsSize*numsSize;
// int x;
// int *value = malloc(max * sizeof(int));
// int count=0;
//     for(int i = 0; i<numsSize; i++)
//     {
//         for(int j = i; j<numsSize; j++)
//         {
//             for(int k = j; k<numsSize; k++)
//             {
//                 x = nums[i]^nums[j]^nums[k];

//                 bool s=false;

//                 for(int l=0; l<count; l++)
//                 {
//                     if(value[l]==x)
//                     {
//                         s=true;   
//                         break;
//                     }
//                 }

//                 if(!s)
//                 {
//                     value[count++] = x;
//                 }
                

//             }
//         }


//     }
//     free(value);
//     return count;
}