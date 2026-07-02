class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int i=0,j=0,ans=0;
        while(j<n){
            mp[s[j]]++;
            while(i<j && mp[s[j]]>1){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            if(j+1-i==mp.size())ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};