class Solution {
public:
    int smallestNumber(int n) {
        int i=0;
        int x = pow(2,i);

        while(x<=n){
            x = pow(2,++i);
        }
        return x-1;
    }
};