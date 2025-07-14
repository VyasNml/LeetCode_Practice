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
    void preOrder(TreeNode* root,int t,vector<vector<int>>& n, vector<int>& nums,int& sum){
        if(root==nullptr)return;
        
        nums.push_back(root->val);
        sum+=root->val;

        if(sum==t && root->left==nullptr && root->right==nullptr){
            n.push_back(nums);
        }else{
            preOrder(root->left,t,n,nums,sum);
            preOrder(root->right,t,n,nums,sum);
        }
    
        sum-=root->val;
        if(!nums.empty()){
            nums.pop_back();
        }


    }

    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>> n;
        vector<int> nums;
        int sum = 0;
        preOrder(root,t,n,nums,sum);

        return n;
    }
};