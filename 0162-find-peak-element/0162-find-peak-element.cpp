class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        if(r==0)return 0;
        while(l<r){
            int m = (l+r)/2;
            //if mid is less than its next ele, peak must be in the right half
            if(nums[m]<nums[m+1]){
                l = m+1;
            }else{
                r = m; //not m-1
            }
        }
        return l; 
    }
};