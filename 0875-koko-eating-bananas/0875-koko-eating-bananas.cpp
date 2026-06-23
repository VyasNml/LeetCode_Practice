class Solution {
public:
    bool speed(vector<int>& piles, int h,int mid){
        int count=0;
        for(int i=0;i<piles.size();i++){
            count+=ceil((double)piles[i]/mid);
            if(count > h)return false;
        }
        return count<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int x:piles)maxi = max(x,maxi);
        int l = 1,r=maxi;
        while(l<=r){
            int mid = (l+r)/2;
            if(speed(piles,h,mid)){
                maxi=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return maxi;
    }
};