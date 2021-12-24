class Solution {
public:
    int ans = 0;
    
    int solve(vector<vector<int> > v,vector<vector<bool> > &visi,int i,int j ,int n,int m){
        
        if(i<0 || i>=n || j<0 || j>=m || v[i][j] == 0 || visi[i][j] == true){
            return 0;
        }
        
        visi[i][j] = true;
        
        
        return 1+
        solve(v,visi,i+1,j,n,m)+
        solve(v,visi,i-1,j,n,m)+
        solve(v,visi,i,j+1,n,m)+
        solve(v,visi,i,j-1,n,m);
        
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& v) {
        
        
        int n = v.size();
        int m = v[0].size();
        
        
        vector<vector<bool> > visi(n,vector<bool>(m,false));
     
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == 1 && !visi[i][j]){
                    ans = max(solve(v,visi,i,j,n,m),ans);
                }
            }
        }
        
        return ans;
    }
};
