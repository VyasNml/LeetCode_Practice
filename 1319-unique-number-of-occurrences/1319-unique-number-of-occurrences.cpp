class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        vector<int> nums;
        for(auto x:m){
            nums.push_back((int)x.second);
        }

        m.clear();
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int count=0;
        for(auto x:m){
            if(x.second>1)return false;
        }
        return true;
    }
};