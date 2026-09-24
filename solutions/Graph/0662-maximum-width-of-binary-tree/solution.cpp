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
    int widthOfBinaryTree(TreeNode* root) {
    if(root==NULL)
    return 0;
    queue<pair<TreeNode* ,unsigned long long>>qu;
    int maxw=0;
    qu.push({root,0});
    while(!qu.empty())
    {
        unsigned long long st=qu.front().second;
        unsigned long long ed=qu.back().second;
        int s=qu.size();
        maxw=max(maxw,((int)(ed-st+1)));
        for(int i=0;i<s;i++)
        {
            auto it=qu.front();
            qu.pop();
            TreeNode* node=it.first;
            unsigned long long idx=it.second;
            if(node->left)
            qu.push({node->left,2*idx+1});
            if(node->right)
            qu.push({node->right,2*idx+2});
        }
    }
    return maxw;
    }
};
