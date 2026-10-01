class Solution {
public:
    string convert(string s, int numRows) 
    {

         if(numRows == 1)
            return s;

            
        vector<string> rows(numRows);
        int row=0;
        int direction =1;

        for(int i=0; i<s.length(); i++)
        {
            rows[row]+=s[i];

            if(row==0)
            {
                direction=1;
            }
            
            if(row==numRows-1)
            {
                direction =-1;
            }

            row+=direction;

        }
            string res;

            for(int i=0; i<numRows; i++)
            {
                res+=rows[i];
            }


            return res;
    }
        
};