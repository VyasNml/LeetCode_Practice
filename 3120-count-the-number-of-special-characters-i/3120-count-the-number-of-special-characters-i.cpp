class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mp;
        int count=0;
        for(char ch:word){
            mp[ch]++;
        }
        for(char ch:word){
            if(ch>='a' && ch<='z'){
                char up = (ch - 32);  
                if(mp[up]){
                    count++;
                    mp[up]=0;
                } 
            }
        }
        return count;
    }
};