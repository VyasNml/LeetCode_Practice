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
    bool path(TreeNode* root, int targetSum, int &sum) {
        if(!root)return false;
        sum+=root->val;
        bool left = path(root->left,targetSum,sum);
        bool right = path(root->right,targetSum,sum);
        bool curr = false;
        if(!root->left && !root->right && (sum==targetSum)){
            curr = true;
        }
        sum-=root->val;
        return curr|| left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return path(root,targetSum,sum);
    }
};