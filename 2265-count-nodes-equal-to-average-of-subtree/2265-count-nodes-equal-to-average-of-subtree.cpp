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
    pair<int,int> solve(TreeNode* root,int &ans){
        if(!root)return {0,0};
        pair<int,int> l = solve(root->left,ans);
        pair<int,int> r = solve(root->right,ans);
        pair<int,int> ansPair = make_pair(l.first+r.first+root->val,l.second+r.second+1);
        if(ansPair.first/ansPair.second==root->val)ans++;
        return ansPair;
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        solve(root,ans);
        return ans;
    }
};