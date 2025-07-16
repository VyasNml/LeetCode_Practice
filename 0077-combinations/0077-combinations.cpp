class Solution {
public:
    void sub(vector<vector<int>>& p ,vector<int>& arr,int index,int k,int n){
        if(arr.size()==k){
            p.push_back(arr);
            return;
        }

        for(int i=index; i<n; i++){
            // if(i>n || arr.size()>k)return;
            
            arr.push_back(i+1);
            sub(p,arr,i+1,k,n);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> nums;
        // set<set<int>> p;
        vector<int> arr;
        sub(nums,arr,0,k,n);
        // for(auto x:p){
        //     vector<int> ar1;
        //     for(int y:x){
        //         ar1.push_back(y);
        //     }
        //     nums.push_back(ar1);
        //     ar1.clear();
        // }
        return nums;   
    }
};