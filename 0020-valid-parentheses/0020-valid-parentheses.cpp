class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x:s){
            if(!st.empty() && x==')' && st.top()=='('){
                st.pop();
            }else if(!st.empty() && x==']' && st.top()=='['){
                st.pop();
            }else if(!st.empty() && x=='}' && st.top()=='{'){
                st.pop();
            }else{
                st.push(x);
            }
        }
        return (st.empty());
    }
};