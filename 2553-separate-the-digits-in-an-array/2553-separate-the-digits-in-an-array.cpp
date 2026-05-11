class Solution {
public:
    void recursion(vector<int> &ans,int num){
        if(num==0)return;
        int digit = num%10;
        recursion(ans,num/10);
        ans.push_back(digit);
    }

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int num:nums){
            recursion(ans,num);
        }
        return ans;
    }
};