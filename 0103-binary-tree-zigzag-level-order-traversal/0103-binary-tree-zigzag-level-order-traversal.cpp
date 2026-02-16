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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        short toggle = 0;
        while(!q.empty()){
            vector<int> level;
            int qLen = q.size();
            for(int i=0;i<qLen;i++){
                TreeNode* node = q.front();

                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                if(toggle){
                    level.insert(level.begin(),node->val);
                }else{
                    level.push_back(node->val);
                }
                q.pop();
            }
            ans.push_back(level);
            toggle = toggle^1;
        }
        return ans;
    }
};