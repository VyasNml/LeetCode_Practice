class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> arr;
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]!='0'){
                arr.push_back(i);
            }
        }
        vector<int> ar1(boxes.length(),0);
        for(int i=0;i<ar1.size();i++){
            for(int j=0;j<arr.size();j++){
                ar1[i] += abs(arr[j]-i);
            }
        }
        return ar1;
    }
};