class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        int sum = 0;
        bool cond = false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==3)break;
            if(nums[i]==first)cond = true;
            sum+=nums[i];
        }
        if(cond){
            return sum;
        }else{
            sum-=nums[2];
            sum+=first;
            return sum;
        }
    }
};