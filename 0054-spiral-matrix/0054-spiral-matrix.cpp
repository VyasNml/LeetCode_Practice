class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int t=0,b=matrix.size(),l=0,r=matrix[0].size();

        while(l<=r || t<=b){
            for(int j=l;j<r;j++){
                ans.push_back(matrix[t][j]);
            }
            t++;
            if(b<=t)break;
            for(int i=t;i<b;i++){
                ans.push_back(matrix[i][r-1]);
            }
            r--;
            if(r<=l)break;
            for(int j=r-1;j>=l;j--){
                ans.push_back(matrix[b-1][j]);
            }
            b--;
            if(b<=t)break;
            for(int i=b-1;i>=t;i--){
                ans.push_back(matrix[i][l]);
            }
            l++;
            if(r<=l)break;
        }

        return ans;
    }
};