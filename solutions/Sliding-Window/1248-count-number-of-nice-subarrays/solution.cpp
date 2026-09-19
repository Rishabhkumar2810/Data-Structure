class Solution {
public:
int numberOfSubarrays2(vector<int>& nums, int k) {
    if(k<0)
    return 0;
     int ans=0;
        int n=nums.size();
        int l=0;
        int r=0;
        int s=0;
        while(r<n)
        {
            s+=nums[r]%2;
            while(s>k)
            {
                s-=nums[l]%2;
                l++;
            }
            if(s<=k)
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
     int ans=0;
        int n=nums.size();
        int l=0;
        int r=0;
        int s=0;
        int ans2=numberOfSubarrays2(nums,k-1);
        while(r<n)
        {
            s+=nums[r]%2;
            while(s>k)
            {
                s-=nums[l]%2;
                l++;
            }
            if(s<=k)
            ans+=(r-l+1);
            r++;
        }
        return ans-ans2;
    }
};
