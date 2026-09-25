class Solution {
public:
 vector<vector<int>> res;
    void combi(int n,int k,vector<int>& current,vector<bool> used)
    {
        if(current.size()==k)
        {
            res.push_back(current);
            return;

        }

        for(int i=1; i<=n; i++)
        {
            if(used[i-1]==false)
            {
                current.push_back(i);
                used[i-1]=true;

                combi(n,k,current,used);

                current.pop_back();
            }
        }
    }

    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> current;
        vector<bool> used(n,false);

        combi(n,k,current,used);

        return res;
    }
};