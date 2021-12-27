class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        vector<vector<int> > dp(n,vector<int>(m,INT_MAX-100000));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(v[i][j] == 0){
                    dp[i][j] = 0;
                }
                
                else{
                    if(i>0 && v[i][j] != 0){
                       dp[i][j] = min(dp[i-1][j]+1,dp[i][j]);
                    }
                    if(j>0 && v[i][j] != 0){
                       dp[i][j] = min(dp[i][j-1]+1,dp[i][j]);
                    }
                }
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i<n-1){
                    dp[i][j] = min(dp[i+1][j]+1,dp[i][j]);
                }
                if(j<m-1){
                    dp[i][j] = min(dp[i][j+1]+1,dp[i][j]);
                }
            }
        }
        return dp;
    }
};
