class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;
        int c=0;
        for( auto i:seq)
        {
            if(i=='(')
            {
                c++;
                ans.push_back(c%2);
            }
            else
            {
                ans.push_back(c%2);
                c--;
            }
        }
        return ans;
    }
};
