int maxProduct(int n) 
{
    int mul =1;
    int rev=0;
    int m1=0,m2=0;

    while(n!=0)
    {
        rev =  n%10;
        printf("%d",rev);

        if(rev>=m1)
        {
            m2=m1;
            m1=rev;

        }
        else if(rev>=m2 && rev<=m1)
        {
            m2=rev;
        }
        
        n/=10;
    }

    return m1*m2;
     

    
}