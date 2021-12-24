class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int n = s.size();
        
        map<char,int> m;
        int ans = 0;
        
        int i = 0;
        
        
        
        for(int j=0;j<n;j++){
          
                
            if(m.find(s[j])!=m.end() && m[s[j]] >= i){
                 ans = max(ans,j-i);
                 i = m[s[j]]+1;
            }
            else{
                ans = max(ans,j-i+1);
            }
          
            
             m[s[j]] = j;
            
            
        }
        
       
        
        return ans;
    }
};
