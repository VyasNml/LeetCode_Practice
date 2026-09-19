class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int fresh = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    fresh++;
                }else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int time = 0;
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int ax = dx[j]+x;
                    int ay = dy[j]+y;

                    if(ax>=0 && ax<r && ay>=0 && ay<c && grid[ax][ay]==1){
                        q.push({ax,ay});
                        grid[ax][ay] = 2;
                        fresh--;
                    }

                }
            }
            if(!q.empty()){
                time++;
            }
        }
        if(fresh!=0)return -1;
        return time;
    }
};