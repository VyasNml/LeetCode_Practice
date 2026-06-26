class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=1;
        for(int x:nums){
            maxi = max(x,maxi);
        }
        int l=1,r=maxi,ans=maxi;
        while(l<=r){
            int m=l+(r-l)/2;
            int sum=0;
            for(int x:nums){
                sum+=(ceil((double)x/m));
            }
            cout <<endl;
            if(sum<=threshold){
                ans = m;
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
};