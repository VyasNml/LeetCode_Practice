class Solution {
public:
    void solve(vector<vector<int>>& image,int &r,int &b,int color,int i,int j,int curr){
        if(j<0 || j>=r || i<0 || i>=b)return;
        if(image[i][j]==color || image[i][j]!=curr)return;
        image[i][j]=color;
        solve(image,r,b,color,i+1,j,curr);
        solve(image,r,b,color,i-1,j,curr);
        solve(image,r,b,color,i,j+1,curr);
        solve(image,r,b,color,i,j-1,curr);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image[0].size();
        int b = image.size();
        int curr = image[sr][sc];
        solve(image,r,b,color,sr,sc,curr);
        return image;
    }
};