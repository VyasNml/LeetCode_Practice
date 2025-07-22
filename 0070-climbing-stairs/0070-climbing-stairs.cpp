class Solution {
public:
    int reccur(int n, vector<int>& arr){
        if(n==0)return 1;
        if(n<0)return 0;
        if(arr[n]!=-1)return arr[n];
        arr[n] = reccur(n-1,arr) + reccur(n-2,arr);
        return arr[n];
    }

    int climbStairs(int n) {
        vector<int> arr(n+1,-1);
        return reccur(n,arr);
    }
};