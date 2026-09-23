class Solution {
public:
 vector<vector<int>> res;

 void backtrack(vector<int> nums,vector<bool>& used,vector<int> current,int n)
 {
   

    if(current.size()==n)
    {
        res.push_back(current);
        return;
    }

    for(int i=0; i<n;i++)
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

    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<bool> used(nums.size(), false);
        vector<int> current;

        backtrack(nums,used,current,nums.size());

            return res;
    }

};