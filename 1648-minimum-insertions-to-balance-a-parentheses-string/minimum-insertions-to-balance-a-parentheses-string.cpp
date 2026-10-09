class Solution {
public:
    int minInsertions(string s) 
    {
        stack<char> stk;
        int count=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                stk.push('(');
            }
            else if(s[i]==')' && i + 1 < s.size() && s[i+1]==')')
            {
                if(stk.empty())
                {
                    count++;
                }
                else
                {
                    stk.pop();
                }


                i++;
            }
            else
            {
                count++;
                
                if(!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    count++;
                }
            }
        }

        if(!stk.empty())
        {
            return count+(stk.size())*2;
        }
        return count;
        
    }
};