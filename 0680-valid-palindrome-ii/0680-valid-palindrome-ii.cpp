class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                if(isPalindrome(s,l,r-1) || isPalindrome(s,l+1,r)){
                    return true;
                }else{
                    return false;
                }
            }
        }
        return true;      
    }
};