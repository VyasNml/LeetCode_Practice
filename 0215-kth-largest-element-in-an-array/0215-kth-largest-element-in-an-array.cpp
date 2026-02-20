class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(const auto x:nums){
            q.push(x);
        }
        for(int i=1;i<k;i++){
            q.pop();
        }
        return q.top();
    }
};