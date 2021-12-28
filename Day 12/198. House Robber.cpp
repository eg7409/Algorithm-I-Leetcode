class Solution {
public:
    int rob(vector<int>& v) {
        
        int n = v.size();
        
        int with = v[0],without = 0;
        
        for(int i=1;i<n;i++){
            int t = without;
            without = max(t,with);
            with = t + v[i];
        }
        return max(with,without);
    }
};
