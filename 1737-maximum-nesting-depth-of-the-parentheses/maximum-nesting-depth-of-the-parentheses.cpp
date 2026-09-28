class Solution {
public:
    int maxDepth(string s) 
    {
        int dept=0;
        int maxdept=0;

        for(char c : s)
        {
            if(c=='(')
            {
                dept++;
                if(dept>maxdept)
                maxdept = dept;
            }
            else if(c==')')
            {
                dept--;
            }
        }
        return maxdept;
    }
};