class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,sum=0,count=0;
        
        while(i<=j){
            if(nums[i]+nums[j]<=limit)i++;
            count++;
            j--;
            
        }
        return count;
    }
};