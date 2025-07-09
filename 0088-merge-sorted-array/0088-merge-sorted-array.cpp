class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int> ans;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i++]);
            }else{
                ans.push_back(nums2[j++]);
            }
        }
        if(i==m && j<n){
            for(int z = j;z<n;z++){
                ans.push_back(nums2[j++]);
            }
        }
        if(i<m && j==n){
            for(int z = i;z<m;z++){
                ans.push_back(nums1[i++]);
            }
        }
        nums1 = ans;
    }
};