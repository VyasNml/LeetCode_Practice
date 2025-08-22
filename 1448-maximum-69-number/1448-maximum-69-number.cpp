class Solution {
public:
    int maximum69Number (int num) {
        int x = num;
        int r,n=0,leftSix = -1;
        while(x!=0){
            r = x%10;
            if(r==6){
                leftSix = n;
            }
            x/=10;
            n++;
        }
        if(leftSix!=-1){
            num += (3*pow(10,leftSix));
        }
        return num;
        
    }
};