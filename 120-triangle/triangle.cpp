class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int m=triangle.size();
        
        vector<vector<int>> dp(m,vector<int>(m,0));
    
        dp[0][0]=triangle[0][0];


        for(int i=1; i<m; i++)
        {
            dp[i][0] = triangle[i][0] + dp[i-1][0];//first ele

            for(int j=1; j<i; j++)
            {
                dp[i][j]=triangle[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
                
            }
            dp[i][i] = triangle[i][i] + dp[i-1][i-1]; //last ele
        }
        
        return *min_element(dp[m-1].begin(),dp[m-1].end());
        
    }
};