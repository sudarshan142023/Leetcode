/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**)malloc(n * sizeof(char*));
    *returnSize = n;

    for(int i = 1; i <= n; i++) {
        result[i-1] = (char*)malloc(12 * sizeof(char)); // enough for "FizzBuzz"

        if(i % 15 == 0)
            sprintf(result[i-1], "FizzBuzz");
        else if(i % 3 == 0)
            sprintf(result[i-1], "Fizz");
        else if(i % 5 == 0)
            sprintf(result[i-1], "Buzz");
        else
            sprintf(result[i-1], "%d", i);
    }

    return result;
    
    
}