class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> n;
        for(int i=0;i<numRows;i++){
            vector<int> nums(i+1,1);
            n.push_back(nums);
            for(int j=1;j<i;j++){
                n[i][j] = n[i-1][j-1]+n[i-1][j];
            }
        }
        return n;
    }
};