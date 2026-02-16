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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long sum = 0;

        if(!root)return sum;
        priority_queue<long long> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int levSize = q.size();
            sum=0;
            for(int i=0;i<levSize;i++){
                TreeNode* node = q.front();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                sum+=node->val;
                q.pop();
            }
            ans.push(sum);
        }
        if(k>ans.size()) return -1;

        for(int i=0;i<k-1;i++){
            ans.pop();
        }
        return ans.top();        
    }
};