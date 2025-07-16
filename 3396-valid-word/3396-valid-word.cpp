class Solution {
public:
    bool isValid(string word) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        if(word.size()<3)return false;
        bool vow=false,con=false,num=false;
        for(char ch:word){
            if(isdigit(ch)){
                num=true;
            }else if(isalpha(ch)){
                if(vowels.count(tolower(ch)))vow=true;
                if(vowels.count(tolower(ch))==0)con=true;
            }else{
                return false;
            }
        }
        if(vow==true && con==true){
            return true;
        }else{
            return false;
        }
    }
};