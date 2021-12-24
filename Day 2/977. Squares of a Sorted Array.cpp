class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        
        int n = v.size();
        
        vector<int> res;
        
        int i=0,j=n-1;
        
        while(i<=j){
            if(abs(v[i])<=abs(v[j])){
                res.push_back(v[j]*v[j]);
                j--;
            }
            else{
                res.push_back(v[i]*v[i]);
                i++;
            }
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};
