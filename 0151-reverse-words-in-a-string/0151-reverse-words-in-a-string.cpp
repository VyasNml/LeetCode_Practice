class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans="";
        while(i<s.length()){
            while(s[i]==' '){
                i++;
                if(i>=s.length())break;
            }
            if(i>=s.length())break;
            string word="";
            while(s[i]!=' '){
                word+=s[i++];
                if(i>=s.length())break;
            }
            ans.insert(0," "+word);
        }
        return ans.substr(1,ans.length()-1);
    }
};