class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> isl(n,-1);
        vector<int> isr(n,n);

        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty() && heights[st.top()]<heights[i]){
                isl[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty() && heights[st.top()]<heights[i]){
                isr[i]=st.top();
            }
            st.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,heights[i]*((isr[i])-(isl[i]+1)));
        }
        return ans;
    }
};