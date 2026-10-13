class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {

            vector<long long> squres;


        for(int i : nums)
        {
            squres.push_back((long long)i*i);
        }

         sort(squres.begin(), squres.end());
        int n=squres.size();

        long long sum=0;        
        for(int i=0; i<n; i++)
        {
           
            if(i<n/2)
            sum -= squres[i];
            else
            sum += squres[i];

        }
        
        return abs(sum);
    }
};