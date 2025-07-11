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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> n;
        vector<int> nums;
        if(root==nullptr)return n;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int ls = q.size();
            nums.clear();

            for(int i=1;i<=ls;i++){
                TreeNode* temp = q.front();
                q.pop();
                nums.push_back(temp->val);
                if(temp->left!=nullptr)q.push(temp->left);
                if(temp->right!=nullptr)q.push(temp->right);
            }
            n.push_back(nums);
        }
        return n;
    }
};