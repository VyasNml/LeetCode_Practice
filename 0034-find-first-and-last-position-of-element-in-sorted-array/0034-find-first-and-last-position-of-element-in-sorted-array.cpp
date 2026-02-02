class Solution {
public:
    int first(vector<int>& nums,int target){
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                r=m-1;
                ans = m;
            }else if(nums[m]>target){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }

    int last(vector<int>& nums,int target){
        int l=0,r=nums.size()-1,ans=-1;

        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                l=m+1;
                ans = m;
            }else if(nums[m]<target){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums,target),last(nums,target)};
        
    }
};