bool backspaceCompare(char* s, char* t) 
{

    int i = 0, j = 0;

    while(s[i])
    {
        if(s[i] != '#')
        {
            s[j++] = s[i];
        }
        else if(j > 0)
        {
            j--;
        }

        i++;
    }

    s[j] = '\0';

     i = 0, j = 0;

    while(t[i])
    {
        if(t[i] != '#')
        {
            t[j++] = t[i];
        }
        else if(j > 0)
        {
            j--;
        }

        i++;
    }

    t[j] = '\0';

    return (strcmp(s,t)==0);
}