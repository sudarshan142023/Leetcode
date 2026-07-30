class Solution {
public:
    string countAndSay(int n) {
        string cur="1";

            if(n==1)
            {
                return cur;
            }

        for(int i=2; i<=n; i++)
        {
            string next;

            for(int j=0; j<cur.size(); )
            {
                int count=1;
                while(j+1<cur.size() && cur[j]==cur[j+1])
                {
                    count++;
                    j++;
                }

                next+=to_string(count);
                next+=cur[j];

                j++;
            }
            
            cur=next;
        }
        return cur;
    }
};