class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        
        int n = v.size();   
        int m = v[0].size();
        
        int oranges = 0;
        
        queue<pair<int,int> > q;
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == 1){
                    oranges++;
                }
                else if(v[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int time = 0;
        
        vector<pair<int,int> > direction = {{0,1},{0,-1},{1,0},{-1,0}};
        
        int s;
        
        while(!q.empty() && oranges>0){
            
            s = q.size();
            
            for(int i=0;i<s;i++){
                pair<int,int> p = q.front();
                q.pop();
                
                
                for(auto d : direction){
                    int x = d.first + p.first;
                    int y = d.second + p.second;
                    
                    if(x>=0 && x<n && y>=0 && y<m && v[x][y] == 1){
                        v[x][y] = 2;
                        q.push({x,y});
                        oranges--;
                    }
                }
            }
            time++;
        }
        return oranges==0?time:-1;
    }
};
