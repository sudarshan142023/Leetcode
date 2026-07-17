char* intToRoman(int num) {

    int arr[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *str[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    char* res = malloc(20*sizeof(char));
    res[0] = '\0';

    for(int i=0; i<13; i++)
    {
        while(num>=arr[i])
        {
            strcat(res,str[i]);
            num-=arr[i];
        }
    }

    return res;
    
}