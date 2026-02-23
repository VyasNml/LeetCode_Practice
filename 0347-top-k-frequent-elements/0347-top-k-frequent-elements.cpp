class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()<=1)return nums;
        vector<int> ans;
        unordered_map<int,int> freq;
        
        for(int x:nums){
            freq[x]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        
        for(auto it:freq){
            minHeap.push({it.second,it.first});
            if(minHeap.size()>k)minHeap.pop();
        }
        
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;   
    }
};