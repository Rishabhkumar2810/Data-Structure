class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int ans=0;
            while(a)
            {
                ans=ans+a%10;
                a=a/10;
            }
            if(ans==i)
            return i;
        }
        return -1;
    }
};
