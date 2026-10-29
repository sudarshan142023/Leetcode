class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        stack<char> st;
        vector<bool> visited(26,false);
        vector<int> last(26,0);

        // Store last occurrence of each character
        for(int i = 0; i < s.length(); i++)
        {
            last[s[i] - 'a'] = i;
        }


        for(int i=0; i<s.length(); i++)
        {
            char ch=s[i];

            if(visited[ch - 'a'])//skip visited
            continue;

            while(!st.empty() && st.top() > ch && last[st.top() - 'a'] > i)
            {
                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(ch);
            visited[ch - 'a'] = true;

        }

        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
            reverse(ans.begin(), ans.end());
        return ans;
    }
};