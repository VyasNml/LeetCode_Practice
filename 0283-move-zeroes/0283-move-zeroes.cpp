class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                i++;
                j=i;
            }else{
                for(int ind=j;ind<nums.size();ind++){
                    if(nums[ind]!=0){
                        j=ind;
                        break;
                    }
                }
                swap(nums[j],nums[i++]);
            }
        }
        
    }
};