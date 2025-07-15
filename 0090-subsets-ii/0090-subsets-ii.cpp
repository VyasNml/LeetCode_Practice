class Solution {
public:
    void sub(set<vector<int>>& sn,vector<int>& nums,vector<int> arr,int i){
        if(nums.size()==i){
            sn.insert(arr);
            return;
        }
        sub(sn,nums,arr,i+1);
        arr.push_back(nums[i]);
        sub(sn,nums,arr,i+1);
        arr.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> n;
        set<vector<int>> sn;
        vector<int> arr;
        sub(sn,nums,arr,0);
        for(vector<int> i:sn){
            n.push_back(i);
        }
        return n;
    }
};