class Solution {
public:
int numSubarraysWithSum2(vector<int>& nums, int goal) {
      if(goal<0)
      return 0;
        int ans=0;
        int n=nums.size();
        int l=0;
        int r=0;
        int s=0;
        int zeros=0;
        while(r<n)
        {
            s+=nums[r];
            while(s>goal)
            {
                s-=nums[l];
                l++;
            }
            if(s<=goal)
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        int n=nums.size();
        int l=0;
        int r=0;
        int s=0;
        int zeros=0;
        int ans2=numSubarraysWithSum2(nums,goal-1);
        while(r<n)
        {
            s+=nums[r];
            while(s>goal)
            {
                s-=nums[l];
                l++;
            }
            if(s<=goal)
            ans+=(r-l+1);
            r++;
        }
        return ans-ans2;
    }
};
