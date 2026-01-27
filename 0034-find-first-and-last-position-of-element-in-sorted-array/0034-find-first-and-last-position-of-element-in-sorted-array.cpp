class Solution {
public:
    int firstOcc(vector<int>&nums,int target){
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]==target){
                ans = m;
                r = m-1;
            }else if(nums[m]>target){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int>&nums,int target){
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]==target){
                ans = m;
                l = m+1;
            }else if(nums[m]>target){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOcc(nums,target),lastOcc(nums,target)};
    }
};