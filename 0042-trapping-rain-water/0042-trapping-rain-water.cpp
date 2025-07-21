class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int> arl(n);
        vector<int> arr(n);
        for(int i=1;i<n;++i){
            arl[i]=max(nums[i-1],arl[i-1]);
        }
        for(int i=n-2;i>=0;--i){
            arr[i]=max(nums[i+1],arr[i+1]);
        }
        int ans=0;
        for(int i=1;i<n;++i){
            int wl = min(arl[i],arr[i]);
            if(wl>=nums[i])ans+=wl-nums[i];
        }
        return ans;
    }
};