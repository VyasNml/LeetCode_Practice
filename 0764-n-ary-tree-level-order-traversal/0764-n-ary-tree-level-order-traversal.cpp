/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        vector<vector<int>> n;
        if(root==nullptr)return n;
        vector<int>nums;
        q.push(root);
        while(!q.empty()){
            nums.clear();
            int nc = q.size();
            for(int i=1;i<=nc;i++){
                Node* temp = q.front(); 
                nums.push_back(temp->val);
                int s = temp->children.size();
                for(int i=0;i<s;i++){
                    q.push(temp->children[i]);
                }
                q.pop();
            }
            n.push_back(nums);
        }
        return n;
    }
};