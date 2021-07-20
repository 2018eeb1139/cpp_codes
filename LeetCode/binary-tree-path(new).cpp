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
    //  void dfs(TreeNode *Node,string curr_path,vector<string> res){
    //     curr_path+="->"+to_string(Node->val);
    //     if(Node->left==NULL && Node->right==NULL) {res.push_back(curr_path);return;}
    //     if(Node->left) dfs(Node->left,curr_path,res);
    //     if(Node->right) dfs(Node->right,curr_path,res);
    // }
    vector<string> binaryTreePaths(TreeNode* root) {
        // vector<string> res;
        // if(root==NULL) return res;
        // string curr_path=to_string(root->val);
        // if(root->left==NULL && root->right==NULL) res.push_back(curr_path);
        // if(root->left) dfs(root->left,curr_path,res);
        // if(root->right) dfs(root->right,curr_path,res);
        // return res;
        if(root == NULL) return vector<string>();
        if(root->left==NULL && root->right==NULL) return vector<string> {to_string(root->val)};
        vector<string> ans;
        if(root->left){
            for(string s : binaryTreePaths(root->left)){
                ans.push_back(to_string(root->val)+"->"+s);
                // cout << to_string(root->val)+"->"+s << endl;
            }
        }
        if(root->right){
            for(string s : binaryTreePaths(root->right)){
                ans.push_back(to_string(root->val)+"->"+s);
                // cout << to_string(root->val)+"->"+s << endl;
            }
        }
        return ans;
    }
};