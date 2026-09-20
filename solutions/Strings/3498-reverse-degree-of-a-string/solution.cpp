class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            ans=ans+(i+1)*(123-s[i]);
        }
        return ans;
    }
};
