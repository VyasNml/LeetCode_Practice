class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            count++;
            if(nums[i]!=1)count = 0;
            if(count>ans)ans = count;
        }
        return ans;
    }
};