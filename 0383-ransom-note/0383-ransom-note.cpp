class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rf;
        unordered_map<char,int> mf;
        for(char x : ransomNote){
            rf[x]++;
        }
        for(char x:magazine){
            mf[x]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(rf[ransomNote[i]]>mf[ransomNote[i]])return false;
        }
        return true;
    }
};