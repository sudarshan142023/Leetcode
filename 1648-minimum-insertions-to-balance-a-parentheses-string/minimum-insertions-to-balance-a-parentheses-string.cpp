class Solution {
public:
    int minInsertions(string s) 
    {
        int count = 0;
        int need = 0;

        for(char c : s)
        {
            if(c == '(')
            {
                if(need % 2 == 1)
                {
                    count++;
                    need--;
                }

                need += 2;
            }
            else
            {
                need--;

                if(need < 0)
                {
                    count++;
                    need = 1;
                }
            }
        }

        return count + need;
    }
};