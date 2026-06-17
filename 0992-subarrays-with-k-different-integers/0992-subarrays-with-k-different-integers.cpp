class Solution {
public:
    int atmost(vector<int>& nums, int k){
        if(k<=0)return 0;
        unordered_map<int,int> mp;
        int maxi = 0,i=0,j=0;
        int n = nums.size();
        while(j<n){
            mp[nums[j]]++;
            if(mp.size()>k){
                while(i<j &&  mp.size()>k){
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    i++;
                }
            }
            maxi+=(j-i+1);
            j++;
        }
        return maxi;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (atmost(nums,k)-atmost(nums,k-1));
    }
};