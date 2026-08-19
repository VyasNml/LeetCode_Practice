class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int> st;
        for(int x:nums){
            st.insert(x);
        }
        for(int x:st){
            if(!st.count(x-1)){
                int count=1;
                int curr=x;
                while(st.count(curr+1)){
                    curr++;
                    count++;
                }
                maxi = max(count,maxi);
            }
        }
        return maxi;
    }
};