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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int pl,int pr,int il,int ir){
        if(pl>pr && il>ir){
            return nullptr;
        }
        int count = 0;
        while(inorder[il+count]!=preorder[pl]){
            count++;
        }
        TreeNode* root= new TreeNode(preorder[pl]);
        root->left = helper(preorder,inorder,pl+1,pl+count,il,il+count-1);
        root->right = helper(preorder,inorder,pl+count+1,pr,il+count+1,ir);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return helper(preorder,inorder,0,n-1,0,n-1);
    }
};