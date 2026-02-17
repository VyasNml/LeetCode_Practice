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
    TreeNode* solution(int l,int r,vector<int>& nums) {
        if(l>r)return nullptr;
        int mid = (l+(r-l)/2);
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left = solution(l,mid-1,nums);
        newNode->right = solution(mid+1,r,nums);
        return newNode;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = nullptr;
        if(!nums.size())return root;
        int l=0,r=nums.size()-1;
        root = solution(l,r,nums);
        return root;
    }
};