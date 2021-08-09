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
   void pathSumUtil(TreeNode* root,int sum,vector<int>& path,int& count) {
      if(root==NULL) return;
      path.push_back(root->val);  
      pathSumUtil(root->left,sum,path,count);
      pathSumUtil(root->right,sum,path,count);
      int curr_sum=0;
      for(int i=path.size()-1;i>=0;i--){
        curr_sum+=path[i];
        if(curr_sum==sum) count++;  
      }
      path.pop_back();  
    }
public:
    int pathSum(TreeNode* root, int sum) {
        vector<int> path;
        int count=0;  
        pathSumUtil(root,sum,path,count);
        return count; 
    }
};