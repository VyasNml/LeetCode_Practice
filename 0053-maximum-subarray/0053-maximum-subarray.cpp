class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        for (auto ele : nums) {
            sum += ele;
            ans = max(sum, ans);
            if (sum < 0)
                sum = 0;
        }

        return ans;
    }
};