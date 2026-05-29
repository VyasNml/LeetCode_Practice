class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n>0){
            sum += (n%10);
            n/=10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum = digitSum(nums[i]);
            mini = std::min(sum,mini);
        }
        return mini;
    }
};