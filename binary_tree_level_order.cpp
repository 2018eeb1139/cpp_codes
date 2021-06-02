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
        vector<vector<int>> ans;
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int> level_nodes;
            for(int i=0;i<count;i++){
                TreeNode *temp=q.front();
                q.pop();
                level_nodes.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            ans.push_back(level_nodes);
        }
        return ans;
    }
};
