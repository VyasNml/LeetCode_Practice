class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mini(n);
        int maxi = INT_MAX;
        for(int i=n-1;i>=0;i--){
            maxi = min(maxi,nums[i]);
            mini[i] = min(maxi,nums[i]);
        }
        maxi = nums[0];
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            if(maxi-mini[i]<=k)return i;
        }
        return -1;
    }
};