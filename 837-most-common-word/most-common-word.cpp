class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        for (char &c : paragraph) {
            if (isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }

        stringstream ss(paragraph);

        unordered_map<string, int> mp;
        unordered_set<string> ban(banned.begin(), banned.end());

        string word;
        string ans;
        int maxCount = 0;

        while (ss >> word) {

            if (ban.count(word))
                continue;

            mp[word]++;

            if (mp[word] > maxCount) {
                maxCount = mp[word];
                ans = word;
            }
        }

        return ans;
    }
};