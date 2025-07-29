class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX,l=0,h=nums.size()-1,m;

        while(l<=h){
            m = (l+h)/2;
            if(nums[l]<=nums[m]){
                ans = min(nums[l],ans);
                l=m+1;
            }
            if(nums[m]<nums[h]){
                ans = min(nums[m],ans);
                h=m;
            }
        }
        return ans;
    }
};