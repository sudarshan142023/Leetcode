class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string res="";

        while(columnNumber>0)
        {
            int rem = (columnNumber-1)%26;
            res += (rem+'A');
            columnNumber = (columnNumber-1)/26;

        }

        reverse(res.begin(),res.end());

        return res;
        
    }
};