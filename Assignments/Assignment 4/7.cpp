// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/submissions/1783704337/
class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> arr(26, 0);
            for (int j = i; j < s.size(); j++) {
                arr[s[j] - 'a']++;
                int minFreq = INT_MAX, maxFreq = INT_MIN;

                for (int x : arr) {
                    if (x != 0) {
                        minFreq = min(minFreq, x);
                        maxFreq = max(maxFreq, x);
                    }
                }

                ans += (maxFreq - minFreq);
            }
        }
        return ans;
    }
};