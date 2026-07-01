class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(int x: nums){
            mp[x]=true;
        }
        for(int i=0;i<=nums.size();i++){
            if(!mp.count(i)){
                return i;
            }
            
        }
        return -1;
    }
};