class Solution {
public:
    
    int solve(vector<vector<int>>& v,vector<vector<int>>& dp,int row,int i,int &sum){
        if(row>=v.size()){
            return 0;
        }
        
        if(dp[row][i] != INT_MAX){
            return dp[row][i];
        }
        
        int ans1 = v[row][i] + solve(v,dp,row+1,i,sum);
        int ans2 = v[row][i] + solve(v,dp,row+1,i+1,sum);
        
        dp[row][i] = min(ans1,ans2);
        
        return dp[row][i];
    }
    
    int minimumTotal(vector<vector<int>>& v) {
        
        int n = v.size();
        
        vector<vector<int> > dp(n,vector<int>(n,INT_MAX));
        int sum = 0;
        return solve(v,dp,0,0,sum);
    }
};
