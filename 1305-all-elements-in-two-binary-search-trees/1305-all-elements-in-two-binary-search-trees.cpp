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
    // void preOrder(TreeNode* root,vector<int> &ans){
    void preOrder(TreeNode* root,multiset<int> &ans){
        if(!root)return;
        // ans.push_back(root->val);
        preOrder(root->left,ans);
        ans.insert(root->val);
        preOrder(root->right,ans);

    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> Fans;
        multiset<int> ans;
        preOrder(root1,ans);
        preOrder(root2,ans);
        // sort(ans.begin(),ans.end());
        for(int x:ans){
            Fans.push_back(x);
        }
        return Fans;
    }
};