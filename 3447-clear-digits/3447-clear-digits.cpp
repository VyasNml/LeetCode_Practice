class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        while(true){
            if(i>=s.size())break;
            if(isdigit(s[i+1])){
                s.erase(i,2);
                if(i!=0){
                    i--;
                }  
                    
            }else{
                i++;
            }
        } 
        return s;
    }
};