class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum = 0;
         int  maxi = INT_MIN;
         for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi = (sum>maxi?sum:maxi);
            sum = (sum<0?0:sum);
         }
         return maxi;
    }
};