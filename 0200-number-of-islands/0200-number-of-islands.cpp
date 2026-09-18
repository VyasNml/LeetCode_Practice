class Solution {
public:
    void DFS(vector<vector<char>>& grid, int& r, int& c, int i,int j){
        if(i<0 || i>=r || j<0 || j>=c)return;
        if(grid[i][j]=='1'){
            grid[i][j]='0';
            DFS(grid,r,c,i+1,j);
            DFS(grid,r,c,i-1,j);
            DFS(grid,r,c,i,j+1);
            DFS(grid,r,c,i,j-1);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    DFS(grid,r,c,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};