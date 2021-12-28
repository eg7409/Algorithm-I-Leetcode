class Solution {
public:
    
    vector<vector<int> > ans;
    vector<int> temp;
    
    void solve(int num,int start,int n,int k){
        
        if(num == k){
            ans.push_back(temp);
            return;
        }
        
        for(int i=start;i<n;i++){
            temp.push_back(i+1);
            solve(num+1,i+1,n,k);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        
        solve(0,0,n,k);
        return ans;
    }
};
