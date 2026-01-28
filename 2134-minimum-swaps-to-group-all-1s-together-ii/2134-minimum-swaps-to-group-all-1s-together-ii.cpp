class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)count++;
        }
        int l=0,r=count, mx=0,incount=0;
        for(int i=0;i<count;i++){
            if(nums[i]==1)incount++;
        }
        while(l<=nums.size()){
            if(r==nums.size())r=0;
            mx = std::max(incount,mx);
            if(l==nums.size())break;
            incount-=nums[l++];
            incount+=nums[r++];
        }
        return count-mx;

    }
};