class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = nums[(nums.size()-1)/2];
        int ch = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m){
                ch+=abs(nums[i]-m);
            }
        }
        return ch;
    }
};