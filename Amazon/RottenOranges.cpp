class Solution {
     bool valid(vector<vector<int>>& grid, int i, int j) {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() ||
          grid[i][j] == 0 || grid[i][j] == 2) return false;
        return true;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<pair<int, int>, int>> q;
        int cnt = 0, mark = 0;
        
        for(int i = 0 ; i < grid.size() ; i++) {
            for(int j = 0 ; j < grid[0].size() ; j++) {
                if(grid[i][j] != 0) {
                    cnt++;
                    if(grid[i][j] == 2) q.push({{i, j}, 0}), mark++;
                }
            }
        }
        
        if(mark == cnt) return 0;
        while(!q.empty()) {
            
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            
            if(grid[p.first.first][p.first.second] != 2) 
                mark++, grid[p.first.first][p.first.second] = 2;
            
            if(cnt == mark) return p.second;
            
            if(valid(grid, p.first.first - 1, p.first.second)) 
                q.push({{p.first.first - 1, p.first.second}, p.second + 1});
                
            if(valid(grid, p.first.first, p.first.second + 1)) 
                q.push({{p.first.first, p.first.second + 1}, p.second + 1});
            
            if(valid(grid, p.first.first + 1, p.first.second)) 
                q.push({{p.first.first + 1, p.first.second}, p.second + 1});
                
            if(valid(grid, p.first.first, p.first.second - 1)) 
                q.push({{p.first.first, p.first.second - 1}, p.second + 1});
        }
        return -1;
    }
};