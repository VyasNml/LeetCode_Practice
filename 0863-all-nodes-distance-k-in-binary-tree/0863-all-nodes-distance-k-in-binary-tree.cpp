class Solution {
public:
    void buildParent(TreeNode* root,
        unordered_map<TreeNode*, TreeNode*>& parent) {
        if (!root) return;
        if (root->left) {
            parent[root->left] = root;
            buildParent(root->left, parent);
        }
        if (root->right) {
            parent[root->right] = root;
            buildParent(root->right, parent);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        buildParent(root, parent);

        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(target);
        visited.insert(target);

        int dist = 0;
        while (!q.empty()) {
            int l = q.size();

            if (dist == k)
                break;

            for(int i=0;i<l;i++){
                TreeNode* cur = q.front();
                q.pop();
                if (cur->left && !visited.count(cur->left)) {
                    visited.insert(cur->left);
                    q.push(cur->left);
                }
                if (cur->right && !visited.count(cur->right)) {
                    visited.insert(cur->right);
                    q.push(cur->right);
                }
                if (parent.count(cur) && !visited.count(parent[cur])) {
                    visited.insert(parent[cur]);
                    q.push(parent[cur]);
                }
            }
            dist++;
        }

        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};