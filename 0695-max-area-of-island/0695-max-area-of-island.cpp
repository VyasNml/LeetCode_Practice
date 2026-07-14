class Solution {
public:
    void DFS(vector<vector<int>>& grid,int &m,int &n,int i,int j,int &size){
        if(0>i || 0>j || i>=m || j>=n || grid[i][j]==0)return;
        size = size+1;
        grid[i][j]=0;
        //l
        DFS(grid,m,n,i,j-1,size);
        // r
        DFS(grid,m,n,i,j+1,size);
        // u
        DFS(grid,m,n,i-1,j,size);
        // d
        DFS(grid,m,n,i+1,j,size);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int maxi = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int size=0;
                if(grid[i][j])DFS(grid,m,n,i,j,size);
                maxi=max(size,maxi);
            }
        }
        return maxi;
    }
};