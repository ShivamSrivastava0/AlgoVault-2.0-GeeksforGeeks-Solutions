class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<long long, int> mp;

        mp[0] = -1;

        long long prefix = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            if (mp.find(prefix - k) != mp.end()) {
                ans = max(ans, i - mp[prefix - k]);
            }

            if (mp.find(prefix) == mp.end()) {
                mp[prefix] = i;
            }
        }

        return ans;
    }
};