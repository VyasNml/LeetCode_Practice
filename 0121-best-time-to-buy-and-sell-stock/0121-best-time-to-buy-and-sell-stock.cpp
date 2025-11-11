class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int low=INT_MAX,high=INT_MIN,max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<low)low = nums[i];high=0;
            if(nums[i]>high)high = nums[i];
            if(max < high-low)max = high-low;
        }
        return max;
    }
};