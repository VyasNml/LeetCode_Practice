class Solution {
public:
    void DFS(vector<vector<int>> &adj, vector<int> &visited,int i){
        visited[i] = 1;
        for(int x:adj[i]){
            if(!visited[x])DFS(adj,visited,x);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<isConnected.size();j++){
                if(i!=j){
                    if(isConnected[i][j]){
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }   
            }
        }
        int count = 0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(adj,visited,i);
                count++;
            }
        }
        return count;
    }
};