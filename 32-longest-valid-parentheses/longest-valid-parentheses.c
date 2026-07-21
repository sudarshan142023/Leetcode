int longestValidParentheses(char* s) {

    int right = 0;
    int left = 0;
    int max = 0;

    for(int i=0; s[i]; i++)
    {
        if(s[i]=='(')
        left++;
        else
        right++;

        if(left==right)
        {
            int len = 2*right;
            if(len>max)
            max=len;
        }
        else if(right>left)
        {
            left=right =0;
        }
    }

    left=right =0;

    int n= strlen(s);


    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='(')
        left++;
        else
        right++;

        if(left==right)
        {
            int len = 2*right;
            if(len>max)
            max=len;
        }
        else if(left>right)
        {
            left=right =0;
        }
    }

    return max;
}