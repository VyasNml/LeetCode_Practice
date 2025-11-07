class Solution {
public:
    int maxDigit(int n){
        int max = -1;
        while(n!=0){
            int digit = n%10;
            if(digit>max)max=digit;
            n/=10;
        }
        return max;
    }
    int maxSum(vector<int>& nums) {
        vector<int> digit;
        for(int i=0;i<nums.size();i++){
            digit.push_back(maxDigit(nums[i]));
        }
        int max=-1;
        for(int i=0;i<digit.size();i++){
            for(int j=i+1;j<digit.size();j++){
                if((digit[i]==digit[j])){
                    if(nums[i]+nums[j] > max){
                        max = nums[i]+nums[j];
                    }
                }
            }
        }
        return max;
    }
};