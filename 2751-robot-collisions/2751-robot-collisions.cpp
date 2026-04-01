class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        for(int i=0;i<healths.size();i++){
            if(directions[i]=='L'){
                healths[i]*=(-1);
            }
        }
        map<int,int> mp;
        for(int i=0;i<positions.size();i++){
            mp[positions[i]] = healths[i];
        }
        stack<pair<int,int>> st;
        for(auto curr:mp){
            if(curr.second>0){
                st.push(curr);
            }else{
                bool destroy = false;
                while(!destroy && !st.empty() && st.top().second>0 && curr.second<0){
                    if(st.top().second==abs(curr.second)){
                        mp.erase(st.top().first);
                        st.pop();
                        destroy = true;
                    }else if(st.top().second>abs(curr.second)){
                        st.top().second--;
                        destroy = true;
                    }else{
                        curr.second++;
                        mp.erase(st.top().first);
                        st.pop();
                    }
                }
                if(!destroy){
                    st.push(curr);
                }
            }
        }
        map<int,int> mp_ans;
        while(!st.empty()){
            mp_ans[st.top().first] = (st.top().second < 0)? st.top().second*(-1):st.top().second;
            st.pop();
        }
        vector<int> ans;
        for(int x:positions){
            if(mp_ans.contains(x)){
                ans.push_back(mp_ans[x]);
            }
        }
        return ans;
        
    }
};