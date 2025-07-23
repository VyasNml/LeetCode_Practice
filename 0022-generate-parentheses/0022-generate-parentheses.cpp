class Solution {
public:
    void reccur(vector<string>& arr,int &n, string s,int i,int j){
        if(s.size()==n*2)arr.push_back(s);
        if(s.size()>=n*2)return;
        if(i<n)reccur(arr,n,s+'(',i+1,j);
        if(j<i)reccur(arr,n,s+')',i,j+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        int i=0,j=0;
        reccur(arr,n,"",i,j);
        return arr;
    }
};