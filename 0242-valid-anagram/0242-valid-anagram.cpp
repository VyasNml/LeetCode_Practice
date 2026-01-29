class Solution {
public:

    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int> map;
        for(char x:s){
            map[x]++;
        }
        for(char x:t){
            map[x]--;
        }
        for(auto x:map){
            if(x.second!=0)return false;
        }
        return true;
    }
};