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
    void preOrder(TreeNode* root,int& count,int pm){
        if(root==nullptr)return;
        if(root->val>=pm){
            count++;
            pm = root->val;
        }
        preOrder(root->left,count,pm);
        preOrder(root->right,count,pm);
    }

    int goodNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        int max = root->val;
        int count = 0;
        preOrder(root,count,max);
        
        return count;
    }
};