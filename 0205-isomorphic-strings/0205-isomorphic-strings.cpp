class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        map<char,char> n;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i]) && m[s[i]]!=t[i])return false;
            else m[s[i]]=t[i];
            
            if(n.count(t[i]) && n[t[i]]!=s[i])return false;
            else n[t[i]]=s[i];
            
        }
        return true;
    }
};