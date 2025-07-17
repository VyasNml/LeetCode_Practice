class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        if(x<0)return false;
        long long sum=0;
        while(x>0){
            sum *= 10;
            sum+=(x%10);
            x/=10;
        }
        if(sum>=INT_MAX-1 || sum<INT_MIN)return false;
        return sum==n;
        

        
    }
};