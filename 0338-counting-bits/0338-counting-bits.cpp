class Solution {
public:
    int countOnes(int n){
        int k=0;
        while(n>0){
            if(n&1)k++;
            n=n>>1;
        }
        return k;
    }
    vector<int> countBits(int n) {
        vector<int> nums;
        for(int i=0;i<=n;i++){
            nums.push_back(countOnes(i));
        }
        return nums;
    }
};