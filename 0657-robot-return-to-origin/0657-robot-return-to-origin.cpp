class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int> mp;
        for(char ch:moves){
            mp[ch]++;
        }
        if(mp['U']==mp['D'] && mp['L']==mp['R'])return true;

        return false;
    }
};