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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>qu;
        qu.push(root);
        vector<vector<int>>ans;
        while(!qu.empty())
        {
           vector<int>level;
            int n=qu.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode* a=qu.front();
                qu.pop();
                level.push_back(a->val);
                if(a->left)
                   qu.push(a->left);
                if(a->right)
                   qu.push(a->right);
            }
            ans.push_back(level);
        }
        vector<double>res;
        for(int i=0;i<ans.size();i++)
       {     double s=0;
            for(int j=0;j<ans[i].size();j++)
            {
                    s+=ans[i][j];
            }
            res.push_back(s/ans[i].size());
        }
        return res;
    }
};
