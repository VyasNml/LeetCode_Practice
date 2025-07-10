class Solution {
public:
    string reverseWords(string s) {
        string sr="";
        vector<string> arr;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                sr+=s[i];
            }else{
                if(!sr.empty()) arr.push_back(sr);
                sr="";
            }
        }
        if(!sr.empty()) arr.push_back(sr);
        sr = "";
        for(int i =arr.size()-1;i>=0;i--){
            sr+=arr[i];
            if(i!=0)sr+=" ";
        }
        return sr;
    }
};