class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_map<int,int> m;
           for(int i=0;i<nums1.size();i++){
                m[nums1[i]]++;
           }
           nums1.clear();
           for(auto x:m){
                nums1.push_back(x.first);
           }
           m.clear();
           for(int i=0;i<nums2.size();i++){
                m[nums2[i]]++;
           }
           nums2.clear();
           for(auto x:m){
                nums2.push_back(x.first);
           }
           m.clear();

           vector<int> ans;

           sort(nums1.begin(),nums1.end());
           sort(nums2.begin(),nums2.end());
            int i=0,j=0;
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                    continue;
                }

                if(nums1[i]<nums2[j]){
                    i++;
                }else{
                    j++;
                }
            }
        
        return ans;
    }
};