class Solution {
public:
    string smallestPalindrome(string s) 
    {
        sort(s.begin(),s.end());

        string left = "";
        char mid = '\0';

        for(int i=0; i<s.size(); )
        {
            int count =1;

            while(i+1<s.size() && s[i]==s[i+1])
            {
                count++;
                i++;
            }

            left+=string(count/2,s[i]);

            if(count%2)
            {
                mid = s[i];
            }

            i++;
        }

        string right = left;
        reverse(right.begin(),right.end());

        if(mid)
        return left+mid+right;

        return left+right;

        
    }
 
};