class Solution {
public:
    void DFS(int city,vector<vector<int>> &isConnected, vector<bool> &isVisited){
        // mark current city visited
        isVisited[city] = true;

        for(int neighbour=0;neighbour<isConnected.size();neighbour++){
            if(isConnected[city][neighbour] && !isVisited[neighbour]){
                DFS(neighbour,isConnected,isVisited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> isVisited(n,false);
        int proCount = 0;

        for(int i=0;i<n;i++){
            if(!isVisited[i]){
                DFS(i,isConnected,isVisited);
                proCount++;
            }
        }
        return proCount;
    }
};