class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int n=nums.size();
       int lsum=0,rsum=0,maxlen=0;
       for(int i=0;i<k;i++)
       {
        lsum+=nums[i];
       }
        maxlen=lsum;
        int rx=n-1;
       for(int i=k-1;i>=0;i--)
       {
        lsum-=nums[i];
        rsum+=nums[rx];
        maxlen=max(maxlen,lsum+rsum);
        rx=rx-1;
       }
       return maxlen;
    }
};
