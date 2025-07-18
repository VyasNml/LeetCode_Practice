class Solution {
public:
    string repString(string s,int n){
        string r;
        for(int i=0;i<n;i++){
            r+=s;
        }
        return r;
    }
    string decodeString(string s) {
        stack<string> st;  
        string str;
        for(int i=0;i<s.size();i++){
            st.push(string(1,s[i]));
            if(st.top()=="]"){
                str="";
                st.pop();
                while(st.top()!="["){
                    str.insert(0,st.top());
                    st.pop();
                }
                st.pop();

                // int num = stoi(st.top());
                // st.pop();
                // /*
                int num = 0;
                int base = 1;

                while (!st.empty() && isdigit(st.top()[0])) {
                    char ch = st.top()[0];
                    num += (ch - '0') * base;
                    base *= 10;
                    st.pop();
                }
                // */

                st.push(repString(str,num));
            }
        }
        str="";
        while(!st.empty()){
            str.insert(0,st.top());
            st.pop();
        }
        return str;
    }
};