class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev1 = cost[0];
        int prev2 = cost[1];
        for(int i=2;i<cost.size();i++){
            int curr = cost[i]+min(prev1,prev2);
            prev1 = prev2;
            prev2 = curr;
        }
        return min(prev1,prev2);
    }
};