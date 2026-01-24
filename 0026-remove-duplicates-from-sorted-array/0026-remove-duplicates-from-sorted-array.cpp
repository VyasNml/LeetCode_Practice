class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,curr=nums[0];
        for(int i=0;i<nums.size();i++){
            if(curr!=nums[i]){
                nums[++j]=nums[i];
                curr = nums[i];
            }
        }
        return j+1;
    }
};