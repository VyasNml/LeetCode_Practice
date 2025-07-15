class Solution {
public:
    void sub(vector<vector<int>>& n, vector<int> nums,vector<int> arr, int i){
        if(i==nums.size()){
            n.push_back(arr);
            return;
        }
        sub(n,nums,arr,i+1);
        arr.push_back(nums[i]);
        sub(n,nums,arr,i+1);
        arr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> n;
        vector<int> arr;
        sub(n,nums,arr,0);
        return n;
    }
};