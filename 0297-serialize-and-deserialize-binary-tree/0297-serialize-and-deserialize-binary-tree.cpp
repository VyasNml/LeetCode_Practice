/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void shelp(TreeNode* root,string &ans){
        if(root==nullptr){
            ans+="#";
            return;
        }else{
            string str = "";
            str += to_string(root->val);
            str+=",";
            ans+=str;
        }
        shelp(root->left,ans);
        shelp(root->right,ans);        
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans="";
        shelp(root,ans);
        return ans;
    }

    TreeNode* dehelp(string &data, int &i){
        if(data[i]==',')i++;
        if(data[i]=='#'){
            i++;
            return nullptr;
        }else{
            string s = "";
            while(data[i]!=','){
                s+=data[i++];
            }
            int val = stoi(s);
            TreeNode* node = new TreeNode(val);
            i++;
            node->left = dehelp(data,i);
            node->right = dehelp(data,i);
            return node;
        }
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i=0;
        return dehelp(data,i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));