class Solution {
public:
    int rev(int num){
        int ans=0,x=num;
        while(x!=0){
            ans = (ans*10)+(x%10);
            x/=10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int n1,n2;
        n1 = rev(num);
        n2 = rev(n1);
        return n2==num;
    }
};