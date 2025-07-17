class Solution {
public:
    string isPallindrome(string s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
   }

    string longestPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();++i){
            string o = isPallindrome(s,i,i);
            string e = isPallindrome(s,i,i+1);

            if(o.size()>str.size())str=o;
            if(e.size()>str.size())str=e;
        }
        return str;
    }
};