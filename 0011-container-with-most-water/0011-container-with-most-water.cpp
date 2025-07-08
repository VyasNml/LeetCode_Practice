class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0,i=0,j=height.size()-1;
        while(i<j){
            int v = min(height[i],height[j]);
            if(v*(j-i)>m){
                m=v*(j-i);
            }
            height[i]<height[j] ? i++ : j--;
        }
        return m;
    }
};