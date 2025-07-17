class Solution {
public:
    int reverse(int n) {
        if (n >= INT_MAX-1 || n <= INT_MIN) return 0;
        long long sum = 0;
        int x = abs(n);
        while(x>0){
            int digit = x%10;
            sum*=10;
            sum+=digit;
            x/=10;
        }
        if (sum >= INT_MAX-1 || sum <= INT_MIN) return 0;
        if(n<0){
            return -sum;
        }
        return sum;
    }
};