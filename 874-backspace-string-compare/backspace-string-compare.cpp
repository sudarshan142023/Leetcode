class Solution {
public:

    string check(string s)
    {
        string ans;

        for(char ch:s)
        {
            if(ch != '#')
            {
                ans.push_back(ch);
            }
            else if(!ans.empty())
            {
                ans.pop_back();
            }
        }
        return ans;

    }
    bool backspaceCompare(string s, string t) 
    {
        return (check(s)==check(t));
   
    }
};