class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
        while(nums.size()>1)
        {
            vector<int> temp(nums.size() / 2);
            int j=0;
            for(int i=0; i<nums.size(); i+=4)
            {
                temp[j]=(min(nums[i],nums[i+1]));
                j+=2;
            }

            j=1;
            for(int i=2; i<nums.size(); i+=4)
            {
                temp[j]=(max(nums[i],nums[i+1]));
                j+=2;
            }

        nums=move(temp);

        }
        
        return nums[0];
    }
};