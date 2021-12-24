class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        int st = 0,en = 0;
        
        for(int i=0;i<n;i++){
            if(s[i] == ' '){
                reverse(s.begin()+st,s.begin()+en+1);
                st = i+1;
                
            }
            else{
                en = i;
            }
        }
        reverse(s.begin()+st,s.begin()+en+1);
        return s;
    }
};
