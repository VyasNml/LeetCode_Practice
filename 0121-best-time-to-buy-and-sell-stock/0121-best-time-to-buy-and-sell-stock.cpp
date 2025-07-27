class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for(int i=0;i<prices.size()-1;i++){
            int j=i+1;
            if(prices[i]>prices[j]){
                continue;
            }
            while(j<prices.size() && prices[i]<prices[j]){
                if(prices[j]-prices[i]>max)max = prices[j]-prices[i];
                j++;
            }
        }
        return max;
    }
};