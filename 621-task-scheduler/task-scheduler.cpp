class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        vector<int> count(26,0);

        for(int i=0; i<tasks.size(); i++)
        {
            count[tasks[i]-'A']++;
        }

        int max_ele=INT_MIN;

        for(int i=0; i<26; i++)
        {
            if(count[i]>max_ele)
            {
                max_ele=count[i];
            }
        }

        int  max_freq=0;
        for(int i=0; i<26; i++)
        {
            if(count[i]==max_ele)
            {
                max_freq++;
            }
        }

        int interval = (max_ele-1)*(n+1)+max_freq;

        return (interval > tasks.size()) ? interval : tasks.size();
        
    }
};