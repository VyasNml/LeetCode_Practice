class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0,maxi=0,n=fruits.size();
        unordered_map<int,int> mp;
        while(j<n){
            mp[fruits[j]]++;
            if(mp.size()<=2){
                maxi=max(j-i+1,maxi);
            }else{
                while(mp.size()>2){
                    if(mp[fruits[i]])mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)mp.erase(fruits[i]);
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};