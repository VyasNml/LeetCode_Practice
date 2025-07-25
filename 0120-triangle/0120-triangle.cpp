// class Solution {
// public:
//     void backtrack(vector<vector<int>>& triangle,int sum,int& minPath,int i,int j){
//         if(j==triangle.size()){
//             minPath = min(minPath,sum);
//             return;
//         }
//         if(i < 0 || i >= triangle[j].size()) return;
//         // if(sum>0 && sum>minPath)return;
//         backtrack(triangle,sum+triangle[j][i],minPath,i,j+1);
//         backtrack(triangle,sum+triangle[j][i],minPath,i+1,j+1);
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int i=0,minPath=INT_MAX;
//         backtrack(triangle,0,minPath,0,0);
//         return minPath;
//     }
// };
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(triangle[n - 1]); 

        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
    }
};
