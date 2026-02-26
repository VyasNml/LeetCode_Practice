class Solution {
public:
    void DFS(int r, int c,vector<vector<char>>& image){

        if(r<0 || r>=image.size() || c<0 || c>=image[0].size() || image[r][c]=='0')return;
        image[r][c] = '0';
        
        // top
        DFS(r-1,c,image);
        // bottom
        DFS(r+1,c,image);
        // left
        DFS(r,c-1,image);
        // right
        DFS(r,c+1,image);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFS(i,j,grid);
                }
            }
        }
        return count;
    }
    
};
