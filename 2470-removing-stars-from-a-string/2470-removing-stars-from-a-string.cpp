class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch=='*'){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        if(s.size()==st.size())return s;
        string str = "";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};