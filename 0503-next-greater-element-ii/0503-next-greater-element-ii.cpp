class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size()*2,-1);
        vector<int> nums2(nums);
        nums2.insert(nums2.end(), nums.begin(), nums.end());
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums.size();i++){
            ans.pop_back();
        }
        return ans;
    }
};