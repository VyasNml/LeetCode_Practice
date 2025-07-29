class Solution {
public:
    int solve(vector<int>& nums) {
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
    int maxSubArray(vector<int>& nums) {
        // int max = 0, sum = 0;
        // max = nums[0];
        // for (int i = 0; i < nums.size(); i++) {
        //     sum = nums[i];
        //     if (sum > max)
        //         max = sum;
        //     if (sum < 0)
        //         continue;

        //     for (int j = i + 1; j < nums.size(); j++) {
        //         sum += nums[j];
        //         if (sum > max)
        //             max = sum;
        //     }
        // }
        return solve(nums);
    }
};