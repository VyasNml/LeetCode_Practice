class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> crumbs;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);
            for (char ch : strs[i]) {
                freq[ch - 'a']++;
            }
            crumbs.push_back(freq);
        }
        vector<vector<string>> ans;
        vector<bool> used(strs.size(), false);
        for (int i = 0; i < strs.size(); i++) {
            if (used[i]) continue;
            vector<string> group;
            for (int j = i; j < strs.size(); j++) {
                if (crumbs[i] == crumbs[j]) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }
            ans.push_back(group);
        }
        return ans;
    }
};