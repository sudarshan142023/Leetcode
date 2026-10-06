class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        stack<int> open;
        stack<int> close;

        for(char c : s)
        {
            if(c=='(')
            {
               open.push(c);
            }
            else
            {
                if(open.size()==0)
                {
                    close.push(c);
                }
                else
                {
                    open.pop();
                }
                
            }
        }
        int move=open.size()+close.size();

        return move;
        
    }
};