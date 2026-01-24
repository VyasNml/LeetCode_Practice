class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min=INT_MAX,max=0;
        for(int i=0;i<nums.size();i++){
            min = std::min(min,nums[i]);
            max = std::max(max,nums[i]-min);
            // if(nums[i]<min){
                // min = nums[i];
            // }

            // if(nums[i]>max)max = std::max(max,max-min);
        }
        return max;
    }
};