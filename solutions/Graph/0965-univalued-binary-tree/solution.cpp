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
    bool isUnivalTree(TreeNode* root) {
       int a=root->val;
        bool ans=isval(root,a);
        return ans;
    }
  bool isval(TreeNode* root,int a)
    {
        if(root==NULL)
        return true ;
        if(a!=root->val)
        return false;
        
        return isval(root->left,a)&&
        isval(root->right,a);
         

    }
};
