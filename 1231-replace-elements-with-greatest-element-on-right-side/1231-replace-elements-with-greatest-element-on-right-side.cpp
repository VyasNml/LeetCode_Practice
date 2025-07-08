class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int mx = nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>mx){
                int t = nums[i];
                nums[i] = mx;
                mx = t;
            }else{
                nums[i] = mx;
            }
        }
        nums[nums.size()-1] = -1;
        return nums;    
    }
};