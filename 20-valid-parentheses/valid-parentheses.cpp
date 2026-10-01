class Solution {
public:
    bool isValid(string s) {

        string stk;
        
        for(char ch : s)
        {
            

            if(ch=='{' || ch=='(' || ch=='[')
            {
                    stk.push_back(ch);
            }
            else
            {
                if(stk.empty())
                {
                    return false;
                }

                char open= stk.back();
                stk.pop_back();
                if((ch=='}' && open!='{') || (ch==')' && open!='(') ||(ch==']' && open!='['))
                {
                    return false;
                }
            }

        }
        if(!stk.empty())
        return false;

        return true;
        
    }
};