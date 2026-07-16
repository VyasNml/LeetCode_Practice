class Solution {
public:
    void DFS(int i, int j,vector<vector<char>>& board,vector<vector<bool>>& visited, int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j])return;
        visited[i][j]=true;
        if(board[i][j]!='X'){
            // r
            DFS(i,j+1,board,visited,m,n);
            // u
            DFS(i-1,j,board,visited,m,n);
            // d
            DFS(i+1,j,board,visited,m,n);
            // l
            DFS(i,j-1,board,visited,m,n);
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(board[i][0]=='X'){
                visited[i][0] = true;
            }else{
                DFS(i,0,board,visited,m,n);
            }
            if(board[i][n-1]=='X'){
                visited[i][n-1] = true;
            }else{
                DFS(i,n-1,board,visited,m,n);
            }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='X'){
                visited[0][i] = true;
            }else{
                DFS(0,i,board,visited,m,n);
            }
            if(board[m-1][i]=='X'){
                visited[m-1][i] = true;
            }else{
                DFS(m-1,i,board,visited,m,n);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j]){
                    board[i][j]='X';
                }        
            }
            cout<<endl;
        }
    }
};