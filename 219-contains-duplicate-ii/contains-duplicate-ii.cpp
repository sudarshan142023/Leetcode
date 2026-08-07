class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int> temp;
        
        for(int i=0; i<nums.size(); i++)
        {
             if (temp.count(nums[i]))
            {
                if(i-temp[nums[i]]<=k)
                {
                return true;
                }
            }

            temp[nums[i]]=i;
        }
        return false;


        return true;
    }
};