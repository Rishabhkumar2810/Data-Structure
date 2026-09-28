class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int ans=0;
        for(char i:s)
        {
            if(i=='(')
            c++;
            else if(i==')')
            c--;
            ans=max(ans,c);
        }
        return ans;
    }
};
