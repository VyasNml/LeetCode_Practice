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
    void inorder(TreeNode* root,int k,int &count, vector<int> &ans){
        if(!root)return;
        if(root->left)inorder(root->left,k,count,ans);
        ans.push_back(root->val);
        if(root->right)return inorder(root->right,k,count,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        vector<int> ans;
        inorder(root,k,count,ans);
        return (ans.size()<k?-1:ans[k-1]); 
    }
};