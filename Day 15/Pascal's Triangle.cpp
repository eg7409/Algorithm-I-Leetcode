class Solution {
    public:
        vector<int> pasrow(int row){
            vector<int> ansrow;
           long long ans = 1;
            ansrow.push_back(1);
    
            for(int i = 1 ;i <row ; i++){
                ans = ans * ( row - i );
                ans = ans / i ;
                ansrow.push_back(ans);
            }
            return ansrow;
        }
    
        vector<vector<int>> pascalTriangle(int numRows) {
            vector<vector<int>> tri;
    
            for(int j = 1; j <= numRows;j++){
                tri.push_back(pasrow(j));
            }
    
            return tri;
        }
    };