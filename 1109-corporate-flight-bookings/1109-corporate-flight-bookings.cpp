class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        for(vector<int> x:bookings){
            int start=x[0]-1;
            int end=x[1]-1;
            int seat=x[2];
            for(int i=start;i<=end;i++){
                ans[i]+=seat;
            }
        }
        return ans;
    }
};