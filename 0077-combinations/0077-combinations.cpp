class Solution {
public:
    void sub(vector<vector<int>>& nums,vector<int>& arr,int index,int& n,int& k){
        if(arr.size()==k){
            nums.push_back(arr);
        }
        for(int i=index;i<=n;i++){
            arr.push_back(i);
            sub(nums,arr,i+1,n,k);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> nums;
        vector<int> arr;
        sub(nums,arr,1,n,k);
        return nums;   
    }
};