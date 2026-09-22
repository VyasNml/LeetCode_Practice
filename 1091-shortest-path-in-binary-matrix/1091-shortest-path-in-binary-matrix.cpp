class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        queue<pair<int,int>> q;
        q.push({0, 0});

        grid[0][0] = 1;
        int distance = 1;

        int directions[8][2] = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                auto [r, c] = q.front();
                q.pop();

                if (r == n - 1 && c == n - 1)
                    return distance;

                for (auto& dir : directions) {
                    int nr = r + dir[0];
                    int nc = c + dir[1];

                    if (nr >= 0 && nr < n &&
                        nc >= 0 && nc < n &&
                        grid[nr][nc] == 0) {

                        grid[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }
            distance++;
        }
        return -1;
    }
};