class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)return 1;
        int sum=0,curr=1;
        while(sum<=n){
            if(INT_MAX-sum<curr)return curr-1;
            sum+=curr;
            curr++;
        }
        return curr-2;
    }
};