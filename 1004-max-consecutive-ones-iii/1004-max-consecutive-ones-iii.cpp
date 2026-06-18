class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,maxi=0,count=0;
        while(j<nums.size()){
            if(nums[j]==0){
                if(count<=k){
                    count++;
                }
                if(count>k){
                    while(i<=j && count>k){
                        if(nums[i]==0)count--;
                        i++;
                    }
                }
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};