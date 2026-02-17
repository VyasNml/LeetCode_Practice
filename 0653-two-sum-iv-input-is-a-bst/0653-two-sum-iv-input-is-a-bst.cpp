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
    void inOrder(TreeNode* root,vector<int> &nums){
        if(root==nullptr)return;
        inOrder(root->left,nums);
        nums.push_back(root->val);
        inOrder(root->right,nums);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inOrder(root,nums);

        int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==k){
                return true;
            }else if(nums[l]+nums[r]>k){
                r--;
            }else{
                l++;
            }
        }
        return false;
    }
};