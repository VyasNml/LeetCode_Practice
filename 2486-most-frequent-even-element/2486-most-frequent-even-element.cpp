class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)freq[nums[i]]++;
        }
        int m=0,ind=-1;
        for(auto it=freq.begin();it!=freq.end();++it){
            if(it->second>m){
                m = it->second;
                ind = it->first;
            }
        }
        return ind;
    }
};