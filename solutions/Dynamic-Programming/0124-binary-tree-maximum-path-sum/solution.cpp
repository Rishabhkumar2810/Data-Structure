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
    int ans=INT_MIN;
    int maxPathSum(TreeNode* root) {
        path(root);
        return ans;

    }
    int  path(TreeNode* root)
    {
        int p=0;
        if(root==NULL)
        return 0;
        int lt=max(0,path(root->left));
        int  rt=max(0,path(root->right));
        p=lt+rt+root->val;
        ans=max(ans,p);
        return root->val+max(lt,rt);
    }
};
