class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        if(nums.size()<=1) return nums;
        vector<int> st;
        for(int i=0;i<nums.size();i++){
            bool d = false;
            while(!st.empty() && nums[i]<0 && st.back()>0){
                if(st.back()==abs(nums[i])){
                    st.pop_back();
                }else if(st.back()<abs(nums[i])){
                    st.pop_back();
                    continue;
                }
                d=true;
                break;
            }
            if(!d)st.push_back(nums[i]);
        }
        return st;
    }
};