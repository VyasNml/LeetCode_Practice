class Solution {
public:
    string convert(string s, int r) {
        if(r<=1)return s;
        vector<string> v(r,"");
        int pos = 0,toggle=1;
        for(int i=0;i<s.size();i++){
            v[pos]+=s[i];
            pos+=toggle;
            if(pos==r-1)toggle=-1;
            if(pos==0)toggle=1;
        }
        s="";
        for(string str:v){
            s+=str;
        }
        return s;
    }
};