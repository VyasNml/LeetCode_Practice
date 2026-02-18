/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preOrder(TreeNode* root,vector<int> &v){
        if(root==nullptr)return;
        v.push_back(root->val);
        preOrder(root->left,v);
        preOrder(root->right,v);
    }

    void flatten(TreeNode* root) {
        if(!root)return;
        vector<int> v;
        preOrder(root,v);
        TreeNode* temp = root;
        for(int i=0;i<v.size();i++){
            if(root){
                root->val = v[i];
                root->left = nullptr;
                temp = root;
                root=root->right;
            }else{
                TreeNode* newNode = new TreeNode(v[i]);
                temp->right = newNode;
                temp = temp->right;
            }
        }
    }
};