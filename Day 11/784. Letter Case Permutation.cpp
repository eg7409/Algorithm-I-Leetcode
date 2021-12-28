class Solution {
public:
    
    vector<string> v;
    
    void permute(string s,int i,int n){
        
        
        if(i==n){
            v.push_back(s);
            return;
        }
        
        if(isdigit(s[i])){
            permute(s,i+1,n);
        }
        else{
            if(s[i] >= 'a' && s[i] <='z'){
                permute(s,i+1,n);
                s[i] = s[i] - 32;
                permute(s,i+1,n);
            }
            else{ 
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    permute(s,i+1,n);
                    s[i] = s[i] + 32;
                    permute(s,i+1,n);
                }
            }
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        
        int n = s.size();
        
        permute(s,0,n);
        
        return v;
    }
};
