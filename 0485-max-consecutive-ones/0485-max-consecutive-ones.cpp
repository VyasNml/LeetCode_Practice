class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,mx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)count++;
            else count=0;
            mx = std::max(count,mx);
            // mx = (count>mx?count:mx);
        }
        return mx;
    }
};