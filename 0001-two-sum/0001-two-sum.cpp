class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==t){
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                    return nums;
                }
            }
        }
        return nums;
    }
};