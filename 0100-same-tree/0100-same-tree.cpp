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
    void traversal(TreeNode* p,TreeNode* q,bool& cond){
        if(p!=nullptr && q!=nullptr){
            if(p->val!=q->val){
                cond=false;
                return;
            }
            traversal(p->left,q->left,cond);
            traversal(p->right,q->right,cond);
        }else if(p==nullptr && q==nullptr){
            return;
        }else{
            cond=false;
        }
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool cond = true;
        traversal(p,q,cond);
        return cond;
    }
};