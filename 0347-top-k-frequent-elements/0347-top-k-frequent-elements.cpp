class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        for(auto x:mp){
            minHeap.push({x.second,x.first});
        }
        while(minHeap.size()>k){
            minHeap.pop();
        }
        vector<int> ans;
        while(minHeap.size()>0){
            ans.insert(ans.begin(),minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};