class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans,l=0,h=nums.size()-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target)return m;
            if(nums[l]<=nums[m]){
                if(nums[m]>=target && target>=nums[l]){
                    h = m;
                    continue;
                }
                l = m+1;
            }
            if(nums[m]<nums[h]){
                if(target>=nums[m] && target<=nums[h]){
                    l = m+1;
                    continue;
                }
                h = m;
            }
        }
        return -1;
    }
};