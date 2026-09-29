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
vector<string>ans;
    vector<string> binaryTreePaths(TreeNode* root) {
      
      string path= to_string(root->val);
      paths(root,path);
      return  ans;
    }
    void  paths(TreeNode* root,string path)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(path);
            return ;
        }
        if(root->left)
         paths(root->left,path+"->"+to_string(root->left->val));
        if(root->right)
         paths(root->right,path+"->"+to_string(root->right->val));

    }
};
