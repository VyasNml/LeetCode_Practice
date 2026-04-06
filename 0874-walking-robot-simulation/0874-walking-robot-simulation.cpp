class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> obs;
        for(auto &o : obstacles) {
            obs.insert({o[0], o[1]});
        }

        vector<pair<int,int>> d = {{0,1},{1,0},{0,-1},{-1,0}};
        int dir = 0;
        int x = 0, y = 0, maxi = 0;

        for(int act : commands) {
            if(act == -1) {
                dir = (dir + 1) % 4;
            } else if(act == -2) {
                dir = (dir + 3) % 4;
            } else {
                for(int i = 0; i < act; i++) {
                    int nx = x + d[dir].first;
                    int ny = y + d[dir].second;

                    if(obs.count({nx, ny})) break;

                    x = nx;
                    y = ny;

                    maxi = max(maxi, x*x + y*y);
                }
            }
        }
        return maxi;
    }
};