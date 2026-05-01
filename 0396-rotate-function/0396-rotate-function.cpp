class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        
        int f0 = 0;
        int sum = 0;

        for(int i=0;i<n;i++){
            f0 += (i*nums[i]);
            sum += nums[i];
        }

        int maxi = f0;
        int curr = f0;

        for(int i=1;i<n;i++){
            curr = curr + sum - (n*nums[n-i]);
            maxi = max(curr,maxi);
        }

        return maxi;
    }
};