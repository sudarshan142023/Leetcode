class Solution {
public:
   vector<string> ans;

    void solve(int index, string& digits, map<char,string>& phone, string temp)
    {
        if(index == digits.size())
        {
            ans.push_back(temp);
            return;
        }

        for(char ch : phone[digits[index]])
        {
            solve(index+1,digits,phone,temp+ch);
        }
    }

    vector<string> letterCombinations(string digits) {

        if(digits.empty())
        return {};

        map<char,string> phone;

        phone['2'] = "abc";
        phone['3'] = "def";
        phone['4'] = "ghi";
        phone['5'] = "jkl";
        phone['6'] = "mno";
        phone['7'] = "pqrs";
        phone['8'] = "tuv";
        phone['9'] = "wxyz";

        solve(0,digits,phone,"");

        return ans;
        
    }
};