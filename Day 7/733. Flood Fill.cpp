class Solution {
public:
    
    void solve(vector<vector<int>>& v,int i,int j,int c,int n,int m,int curr){
        
        if(i<0 || i>=n || j<0 || j>=m || v[i][j]!=curr || v[i][j]==c){
            return;
        }
    
        
        v[i][j] = c;
        
        solve(v,i+1,j,c,n,m,curr);
        solve(v,i-1,j,c,n,m,curr);
        solve(v,i,j+1,c,n,m,curr);
        solve(v,i,j-1,c,n,m,curr);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int c) {
        
        int n = v.size();
        int m = v[0].size();
        int curr = v[sr][sc];
        
        solve(v,sr,sc,c,n,m,curr);
        
        return v;
    }
};
