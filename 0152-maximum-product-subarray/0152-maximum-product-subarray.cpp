class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN,prod;
        for(int i=0;i<nums.size();i++){
            ans = max(nums[i],ans);
            prod=1;
            for(int j=i;j<nums.size();j++){
                prod*=nums[j];
                ans = max(prod,ans);
                if(prod==0)break;
            }
        }
        return ans;
    }
};