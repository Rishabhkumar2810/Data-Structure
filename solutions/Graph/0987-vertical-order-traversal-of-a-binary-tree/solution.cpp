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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
           if(root == NULL)
            return {};
        queue<tuple<TreeNode* ,int,int>>qu;
        qu.push({root,0,0});
        vector<vector<int>>ans;
       map<int, vector<pair<int,int>>> mp;
        while(!qu.empty())
        {
            int s=qu.size();
            for(int i=0;i<s;i++)
            {
             
            auto [node, r, l] = qu.front();
            qu.pop();
            if(node->left)
            qu.push({node->left,r+1,l-1});
            if(node->right)
            qu.push({node->right,r+1,l+1});
            mp[l].push_back({r, node->val});
            }
        }
         for(auto &it : mp)
        {
            sort(it.second.begin(), it.second.end());

            vector<int> temp;

            for(auto p : it.second)
            {
                temp.push_back(p.second);
            }

            ans.push_back(temp);
        }
    return ans;
    }
};
