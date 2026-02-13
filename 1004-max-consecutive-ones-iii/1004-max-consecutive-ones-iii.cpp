class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zc=0;
        int j=0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zc++;
            while(zc>k){
                if(nums[j]==0){
                    zc--;
                }
                j++;
            }
            maxi = std::max(maxi,i-j+1);
        }
        return maxi;
    }
};