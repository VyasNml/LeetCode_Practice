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
    TreeNode* inorderSuc(TreeNode* node){
        while(node->left!=nullptr){
            node = node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;

        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }else{
            //Case 1: No left Child
            // in this replace with the node with its right child
            if(root->left==nullptr){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            //Case 2: No right Child
            // in this replace with the node with its left child
            }else if(root->right==nullptr){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }else{
            //Case 3: Two Child
            // find inorder successor
                TreeNode* minEle = inorderSuc(root->right);
                
                // copy the value of inorder successor to root
                root->val = minEle->val;
                
                // delete the successor from right sub tree
                root->right = deleteNode(root->right,minEle->val);
            }

        }
        return root;
    }
};