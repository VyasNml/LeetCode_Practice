class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            nums[i+1] = nums[i]+nums[i+1];
        }
        int lsum=0,rsum=nums[n-1];
        for(int i=0;i<nums.size();i++){
            if(i>0)lsum = nums[i-1];
            if(lsum==rsum-nums[i]){
                    return i;
            }
        }
        return -1;
    }
};