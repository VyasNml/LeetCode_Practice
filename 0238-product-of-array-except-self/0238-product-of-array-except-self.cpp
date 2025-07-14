class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int z = 0;
        for(int x:nums){
            if(x!=0)prod*=x;
            else z++;                
        }
        for(int i=0;i<nums.size();i++){
            if(z==0){
                nums[i] = prod/nums[i];
            }else if(z==1){
                if(nums[i]==0)nums[i]=prod;
                else nums[i]=0;
            }else{
                nums[i]=0;
            }
        }
        return nums;
    }
};