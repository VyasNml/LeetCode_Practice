class Solution {
public:
    int rowSearch(vector<vector<int>>& matrix, int target,int top,int bottom){
        int ans = 0;
        while(top<=bottom){
            int mid = top+(bottom-top)/2;
            if(matrix[mid][0]<=target){
                ans = mid;
                top = mid+1;
            }else{
                bottom = mid-1;
            }
        }
        return ans;
    }

    bool colSearch(vector<vector<int>>& matrix, int target,int row,int bottom){
        int top=0;
        while(top<=bottom){
            int mid = top+(bottom-top)/2;
            if(matrix[row][mid]==target){
                return true;
            }else if(matrix[row][mid]<target){
                top = mid+1;
            }else{
                bottom = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int bottom = matrix.size()-1;
        int right = matrix[0].size()-1;

        int row = rowSearch(matrix,target,0,bottom);
        return colSearch(matrix,target,row,right);
    }
};