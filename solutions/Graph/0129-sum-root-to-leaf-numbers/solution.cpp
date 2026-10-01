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
    int ans=0;
    int sumNumbers(TreeNode* root) {
        string path=to_string(root->val);
        sum(root,path);
        return ans;
    }
    void sum(TreeNode* root,string path)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans+=stoi(path);
        }   
        if(root->left)
        {
            sum(root->left,path+to_string(root->left->val));
        }
        if(root->right)
        {
            sum(root->right,path+to_string(root->right->val));
        }
    }
   
};
