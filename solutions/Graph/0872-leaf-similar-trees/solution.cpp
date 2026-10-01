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
vector<int>ans1;
vector<int>ans2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs1(root1);
        dfs2(root2);
        if(ans1.size()!=ans2.size())
        return false;
        for(int i=0;i<ans1.size();i++)
        {
            if(ans1[i]!=ans2[i])
            return false;
        }
        return true;
    }
    void dfs1(TreeNode * root1)
    {
        if(root1==NULL)
        return;
        if(root1->left==NULL && root1->right==NULL)
            ans2.push_back(root1->val);
        dfs1(root1->left);
        dfs1(root1->right);
    }
     void dfs2(TreeNode * root2)
    {
        if(root2==NULL)
        return;
        if(root2->left==NULL && root2->right==NULL)
            ans1.push_back(root2->val);
        dfs2(root2->left);
        dfs2(root2->right);
    }
};
