class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> mp;
        map<char,int> ms;
        vector<int> ans;

        for(char x:p){
            mp[x]++;
        }
        int l=0,r=0;
        while(r<s.size()){
            if(r-l<p.length()){
                ms[s[r++]]++;
            }else{
                ms[s[l]]--;
                if(ms[s[l]]==0){
                    ms.erase(s[l]);
                }
                l++;
                ms[s[r++]]++;
            }
            if(mp==ms){
                ans.push_back(l);
            }
        }
        return ans;   
    }
};