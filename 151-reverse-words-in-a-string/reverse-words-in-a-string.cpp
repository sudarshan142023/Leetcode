class Solution {
public:
    string reverseWords(string s) {
            int i = 0;
            int j = 0;

        while (j < s.size()) 
        {

            // Skip leading spaces
            while (j < s.size() && s[j] == ' ')
                j++;

            // Copy one word
            while (j < s.size() && s[j] != ' ')
                s[i++] = s[j++];

            // Skip multiple spaces
            while (j < s.size() && s[j] == ' ')
                j++;

            // Add one space if another word exists
            if (j < s.size())
                s[i++] = ' ';
        }
        s.resize(i);
        reverse(s.begin(),s.end());
       

        int start=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' '&&s[i+1]==' ')
            {
                i++;
            }
            
            if(s[i]==' ')
            {
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }

        }
        reverse(s.begin()+start,s.end());

         cout<<s;
        return s;
    }
};