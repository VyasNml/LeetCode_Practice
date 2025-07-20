class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0,max=0,j=nums.size()-1;
        while(i<j){
            int vol = min(nums[i],nums[j])*(j-i);
            if(vol > max){
                max = vol;
            }
            nums[i]>nums[j] ? j-- : i++;
            
        }
        return max;
    }
};