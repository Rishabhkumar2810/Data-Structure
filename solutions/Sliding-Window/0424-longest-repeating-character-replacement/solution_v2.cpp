class Solution {
public:
    int characterReplacement(string s, int k) {
      int ans=0;
      int l=0;
      int r=0;
      int n=s.size();
      int maxf=0;
      int maxw=0;
      vector<int>has(26,0);
        while(r<n)
        {
            has[s[r]-'A']++;
            maxf=max(maxf,has[s[r]-'A']);
            maxw=r-l+1;
            while(maxw-maxf>k)
            {
                has[s[l]-'A']--;
                for(int i=0;i<26;i++)
                {
                    maxf=max(maxf,has[i]);
                }
                l++;
                maxw--;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
