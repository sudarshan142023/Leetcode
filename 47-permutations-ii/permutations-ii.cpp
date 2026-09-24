class Solution {
public:

 vector<vector<int>> res;
void backtrack(vector<int> nums,vector<bool> used,vector<int>& current,int n)
{
    if(current.size() == n)
    {
        if(find(res.begin(), res.end(), current) == res.end())
        {
            res.push_back(current);
        }

        return;
    }

    for(int i=0; i<n; i++)
    {
        if(used[i]==false)
        {
           current.push_back(nums[i]);
            used[i]=true;

            backtrack(nums,used,current,n);

            current.pop_back();
            used[i]=false;

        }

        
    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<int> current;
        vector<bool> used(nums.size(),false);

        backtrack(nums,used,current,nums.size());
        
        return res;
    }
};