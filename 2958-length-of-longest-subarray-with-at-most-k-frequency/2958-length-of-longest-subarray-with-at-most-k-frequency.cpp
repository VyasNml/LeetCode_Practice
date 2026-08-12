class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0,j=0;
        int maxi=0;
        while(j<nums.size()){
            if(mp.count(nums[j])<=k){
                mp[nums[j]]++;
                if(mp[nums[j]]>k){
                    while(mp[nums[j]]>k && i<=j){
                        mp[nums[i]]--;
                        i++;
                    }
                }else{
                    maxi = max(maxi,j-i+1);
                }
                j++;
            }
        }
        return maxi;
    }
};