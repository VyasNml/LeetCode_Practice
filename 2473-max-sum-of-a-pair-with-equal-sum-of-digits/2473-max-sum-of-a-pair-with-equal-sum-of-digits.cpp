class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
       unordered_map<int,int> m;
       int max=-1;
       for(int i=0;i<nums.size();i++){
        int digit = digitSum(nums[i]);
            if(m.count(digit)){
                if(max<nums[i]+m[digit]){
                    max = std::max(max,nums[i]+m[digit]);
                }
                if(nums[i]>m[digit]){
                    m[digit]=nums[i];
                }
            }else{
                m[digit] = nums[i];
            }
       }
       return max;
    }
};