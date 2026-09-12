class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto i : mp) {
            if (i.second.size() >= 3) {
                vector<int> v = i.second;
                int a = v[1] - v[0];
                bool flag = true;
                int b = 0;
                for (int j = 0; j < v.size() - 1; j++) {
                    b = v[j + 1] - v[j];
                    if (b != a) {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    ans++;
            }
        }
        return ans;
    }
};
