class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            ans+=((int)(123-s[i])*(i+1));
        }
        return ans;
    }
};