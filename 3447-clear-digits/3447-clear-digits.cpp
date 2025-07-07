class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        s = "";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());   
        return s;
    }
};