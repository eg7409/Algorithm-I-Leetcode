class Solution {
public:
    int singleNumber(vector<int>& v) {
        
        int n = v.size();
        int c = v[0];
        
        for(int i=1;i<n;i++){
            c ^= v[i];
        }
        
        return c;
    }
};
