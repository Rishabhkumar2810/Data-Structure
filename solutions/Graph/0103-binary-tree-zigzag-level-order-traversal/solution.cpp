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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>res;
       if(root==NULL)
       return res;
       queue<TreeNode*>qu;
       qu.push(root);
       int f=0;
       while(!qu.empty())
       {
         int s=qu.size();
         vector<int>v;
         for(int i=0;i<s;i++)
         {
            TreeNode * node=qu.front();
            qu.pop();
            if(node->left!=NULL)
            qu.push(node->left);
            if(node->right!=NULL)
            qu.push(node->right);
            v.push_back(node->val);
         }
         if(f==0)
         {
            res.push_back(v);
            f=1;
         }
         else
         {
            reverse(v.begin(),v.end());
            res.push_back(v);
            f=0;
         }
       }

       return res;
    }
};
