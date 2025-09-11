class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int i,l1=word1.length(),l2=word2.length();
        for(i=0;i<(l1<l2?l1:l2);i++){
            s+=word1[i];
            s+=word2[i];
        }
        s+= ((i>=l1) ? (word2.substr(i,l2-i)):(word1.substr(i,l1-i)));
        return s;
    }
};