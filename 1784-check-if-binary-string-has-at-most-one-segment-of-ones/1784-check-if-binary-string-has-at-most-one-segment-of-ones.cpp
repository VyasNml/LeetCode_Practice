class Solution {
public:
    bool checkOnesSegment(string s) {
        int i=0;
        bool cond = true;
        while(i<s.length()){
            if(cond && s[i]=='0'){
                cond = false;
            }
            if(!cond && s[i]=='1')return false;
            i++;
        }
        return true;
    }
};