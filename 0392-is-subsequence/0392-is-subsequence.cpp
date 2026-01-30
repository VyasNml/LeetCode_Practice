class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.length()==0){
            return true;
        }
        if(t.length()==0){
            return false;
        }
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                if(i==s.length()){
                    return true;
                }
            }
            j++;
            
        }
        return false;
        
    }
};