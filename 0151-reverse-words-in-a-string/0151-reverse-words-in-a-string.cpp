class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        // if space skip till a letter
        // if word loop till space
        // push word
        vector<string> st;
        string ans="";
        while(i<s.size()){
            if(s[i]==' '){
                while(s[i]==' ' && i<s.size()){
                    i++;
                }
            }else{
                string str ="";
                while(s[i]!=' ' && i<s.size()){
                    str+=s[i++];
                }
                // st.push_back(str);
                ans.insert(0," "+str);
            }
        }
        ans.erase(0,1);
        return ans;
    }
};