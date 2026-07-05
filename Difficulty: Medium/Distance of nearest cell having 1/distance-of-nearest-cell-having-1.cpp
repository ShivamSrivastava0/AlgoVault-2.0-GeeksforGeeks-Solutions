class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int,int>> q; 
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans[i][j] =0;
                    q.push({i, j});
                }
            }
        }
        
        vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};
        
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            
            int i= p.first;
            int j= p.second;
            
            for(auto dir : directions){
                int new_i = i + dir[0];
                int new_j = j + dir[1];
                
                if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && ans[new_i][new_j]==-1){
                    ans[new_i][new_j] = ans[i][j] +1;
                    q.push({new_i, new_j});
                }
            }
        }
    return ans;
    }
};