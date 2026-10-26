class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string> stk;
        string word;
        stringstream ss(path);

       while(getline(ss,word,'/'))
       {
            if(word=="." || word=="")
            {
                continue;
            }
            else if(word=="..")
            {
                if(!stk.empty())
                stk.pop();
            }
            else
            {
                stk.push(word);
            }
       }

        vector<string> temp;
        while(!stk.empty())
        {
            temp.push_back(stk.top());
            stk.pop();
        }
            
       string res;
       for(int i=temp.size()-1; i>=0; i--)
       {
            res+='/'+temp[i];
       }

       if(res.empty())
       {
            return "/";
       }


        return res;
    }
};