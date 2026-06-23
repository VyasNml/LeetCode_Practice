class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        int l=1,r=num/2;
        while(l<=r){
            int m = l+(r-l)/2;

            if((double)m==(double)num/m){
                return true;
            }else if((double)m>(double)num/m){
                r=m-1;
            }else{
                l=m+1;
            }
            cout << m << endl;
        }
        return false;
    }
};