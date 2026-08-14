class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> ans = {-1,-1};
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==2){
                ans[0] = i;
            }
            if(!mp[i]){
                ans[1] = i;
            }
        }
        return ans;
    }
};