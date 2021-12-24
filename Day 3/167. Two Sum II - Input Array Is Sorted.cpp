class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        
        int n = v.size();
        
        map<int,int> m;
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++){
            int x = k - v[i];
            
            if(m.find(x)!=m.end()){
                return {m[x]+1,i+1};
            }
            m[v[i]] = i;
        }
        
        return {-1,-1};
    }
};
