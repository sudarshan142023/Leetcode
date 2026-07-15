int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}
int gcdOfOddEvenSums(int n) {

    int e_sum = 0;
    int o_sum = 0;

    for(int i=2; i<=n*2; i+=2)
    {
        if(i%2==0)
        e_sum+=i;
    }
    
    for(int i=1; i<n*2; i+=2)
    {
        if(i%2!=0)
        o_sum+=i;
    }

    int result = gcd(e_sum,o_sum);

    return result;
}