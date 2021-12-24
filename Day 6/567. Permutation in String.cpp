class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s2.size();
        int m = s1.size();
        
        string t = "";
        sort(s1.begin(),s1.end());
        
        for(int i=0;i<=n-m;i++){
            
            t = s2.substr(i,m);
            
            sort(t.begin(),t.end());
            
            if(t == s1){
                return true;
            }
            
        }
        return false;
    }
};
