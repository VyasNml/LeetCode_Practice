class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gsum = 0;
        int csum = 0;
        vector<int> pos;
        for(int i=0;i<gas.size();i++){
            gsum+=gas[i];
            csum+=cost[i];
            gas[i]-=cost[i];
            if(gas[i]>0)pos.push_back(i);
        }
        if(gsum<=0) return -1;
        if(gsum<csum) return -1;
        if(gas.size()==1)return 0;
        for(int i:pos){
            int k=i;
            int ksum=0;
            int cond=1;
            for(int j=0;j<gas.size();j++){
                ksum+=gas[k];
                k=(k+1)%gas.size();
                if(ksum<0){
                    cond=0;
                    break;
                }
            }
            if(cond)return i;
        }
        return -1;
    }
};