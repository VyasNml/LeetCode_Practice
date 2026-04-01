class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int curr:asteroids){
            if(curr>0){
                st.push(curr);
            }else{
                bool destroy = false;
                while(!destroy && !st.empty() && st.top()>0 && curr<0){
                    if(st.top()==abs(curr)){
                        st.pop();
                        destroy = true;
                    }else if(st.top()>abs(curr)){
                        destroy = true;
                    }else{
                        st.pop();
                    }
                }
                if(!destroy){
                    st.push(curr);
                }
            }
        }    
        vector<int> ans;
        while(!st.empty()){
            ans.insert(ans.begin(),st.top());
            st.pop();
        }
        return ans;
    }
};