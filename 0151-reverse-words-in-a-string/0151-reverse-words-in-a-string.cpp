class Solution {
public:
    string reverseWords(string s) {
        unordered_map<int,string> words;
        int i=0,count=0;
        string w="";
        while(i<s.length()){//O(n) -> O(n)
            while(s[i]==' ' && i< s.length()){
                i++;
            }//O(1)
            while(s[i]!=' ' && i<s.length()){
                w+=s[i++];
            }//O(word length)
            if(w!=""){
                words[count++] = w;
                w="";
            }
            i++;
        }
        s="";
        for(int i=count-1;i>=0;i--){
            s+=words[i];
            if(i!=0)s+=" ";
        } //O(number of words)
        return s;  //---> O(n) + O(words)
    }
};