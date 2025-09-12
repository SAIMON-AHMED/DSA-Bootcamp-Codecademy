// https://leetcode.com/problems/subarray-sum-equals-k/
// Count subarrays with sum k
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        int ans = 0; // number of sub arrays
        unordered_map<int, int> mp;
        mp[sum] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.find(sum - k) != mp.end()) {
                ans += mp[sum - k];
            }
            mp[sum]++;
        }
        return ans;
    }
};