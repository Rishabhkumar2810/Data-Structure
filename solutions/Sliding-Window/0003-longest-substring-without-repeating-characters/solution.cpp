class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
      for(int i=0;i<s.size();i++)
      {
        vector<int>hash(256,0);
        int a=0;
        for(int j=i;j<s.size();j++)
         {      
            if(hash[s[j]]==1)
            break;
            a=j-i+1;
            len=max(len,a);
            hash[s[j]]=1;
        }

      }
      return len;
    }
};
