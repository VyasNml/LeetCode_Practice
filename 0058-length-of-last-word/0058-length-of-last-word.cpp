class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && !st.empty()){
                break;
            }else if(s[i]!=' '){
                st.push(s[i]);
            }
        }
        s.clear();
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s.size();
    }
};