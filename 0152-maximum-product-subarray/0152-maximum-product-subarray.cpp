class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN,prod=1,i=0;
        while(i<nums.size()){
            ans = max(nums[i],ans);
            prod*=nums[i];
            ans = max(prod,ans);
            if(prod==0)prod=1;
            i++;
        }
        i=nums.size()-1;
        prod=1;
        while(i>=0){
            ans = max(nums[i],ans);
            prod*=nums[i];
            ans = max(prod,ans);
            if(prod==0)prod=1;
            i--;
        }
        return ans;
    }
};