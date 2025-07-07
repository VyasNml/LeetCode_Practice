class Solution {
public:
    int secondHighest(string s) {
        set<int> nums;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                nums.insert(stoi(s.substr(i,1)));
            }
        }
        int m1=-1,m2=-1;
        for(int x : nums){
            cout << x << " ";
            if(m1<x){
                m2 = m1;
                m1 = x;
            }
        }
        return m2;
            
    }
};