class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int tr=0;
        int br=matrix.size()-1;
        int lc=0;
        int rc=matrix[0].size()-1;
        while(tr<=br && lc<=rc){
            for(int i=lc;i<=rc;i++){
                ans.push_back(matrix[tr][i]);
            }
            tr++;
            if(tr>br || lc>rc)break;
            //
            for(int i=tr;i<=br;i++){
                ans.push_back(matrix[i][rc]);
            }
            rc--;
            if(tr>br || lc>rc)break;
            //
            for(int i=rc;i>=lc;i--){
                ans.push_back(matrix[br][i]);
            }
            br--;
            if(tr>br || lc>rc)break;
            //
            for(int i=br;i>=tr;i--){
                ans.push_back(matrix[i][lc]);
            }
            lc++;
            if(tr>br || lc>rc)break;
            //
        }
        return ans;
    }
};