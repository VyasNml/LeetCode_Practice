class Solution {
    public int maxProfit(int[] prices) {
        int low = Integer.MAX_VALUE;
        int high = Integer.MIN_VALUE;
        int ans = 0;

        for(int i=0;i<prices.length;i++){
            if(low>prices[i]){
                low = prices[i];
                high = prices[i];
            }
            if(high<prices[i]){
                high = prices[i];
            }
            ans = Math.max(ans,high-low);
        }
        return ans;
    }
}