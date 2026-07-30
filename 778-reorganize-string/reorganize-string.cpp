class Solution {
public:
    string reorganizeString(string s) 
    {
        vector<int> count(26,0);

        for(char ch : s)
        {
            count[ch-'a']++;
        }

        int max_freq=0;
        int max_char=0;
        for(int i=0; i<26; i++)
        {
            if(count[i]>max_freq)
            {
                max_freq = count[i];
                max_char = i;
            }
        }

        
        int n=s.size();

        string ans(n,' ');
        if (max_freq > (n + 1) / 2)
        {
            return "";
        }

        

        int index=0;

        while(count[max_char]>0)
        {
            ans[index]=max_char+'a';
            index+=2;
            count[max_char]--; 
        }

            for (int i = 0; i < 26; i++)
            {
                while (count[i] > 0)
                {
                    if (index >= n)
                        index = 1;

                    ans[index] = i + 'a';
                    index += 2;
                    count[i]--;
                }
            }
        return ans;
    }
};