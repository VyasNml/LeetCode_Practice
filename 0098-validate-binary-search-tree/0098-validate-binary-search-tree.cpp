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
    bool checkRoot(TreeNode* root,long long max, long long min){
        if(!root)return true;
        if(root->val>=max || root->val<=min){
            return false;
        }
        return checkRoot(root->left,root->val,min) && checkRoot(root->right,max,root->val);
        
    }

    bool isValidBST(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr)return true;
        return checkRoot(root,LLONG_MAX,LLONG_MIN);    }
};