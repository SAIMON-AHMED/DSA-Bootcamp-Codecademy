// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if (len == 1)
        return strs[0];

        sort(strs.begin(), strs.end());

        int minLen = min(strs[0].size(), strs[len - 1].size());
        string ans = "";

        for (int i = 0; i < minLen; i++) {
            if (strs[0][i] != strs[len - 1][i])
            return ans;

            ans += strs[0][i];
        }
        return ans;
    }
};