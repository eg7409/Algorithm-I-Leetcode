class Solution {
public:
    int search(vector<int>& v, int k) {
        
        int n = v.size();
        
        int start = 0,end = n-1;
        
        while(start<=end){
            
            int mid = (start+end)/2;
            
            if(v[mid] == k){
                return mid;
            }
            
            if(v[mid] > k){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
        }
        
        return -1;
    }
};
