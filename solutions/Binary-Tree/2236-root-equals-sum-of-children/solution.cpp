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
    bool checkTree(TreeNode* root) {
        bool ans=check(root);
    return ans;
    }
    bool check(TreeNode* root)
    {
        if(root==NULL)
        return true;
        if(root->left && root->right)
            {
                if(root->val!=root->left->val+ root->right->val)
                return false;
            }    
        return check(root->left) && check(root->right);
    }
};
