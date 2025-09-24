// https://leetcode.com/problems/longest-common-prefix/submissions/1781219698/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = INT_MAX;
        for (string s : strs) {
            if (s.size() < minLen) {
                minLen = s.size();
            }
        }
        string prefix = "";
        bool flag;
        for (int i = 0; i < minLen; i++) {
            char c = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] == c) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                prefix += c;
            } else {
                break;
            }
        }
        return prefix;
    }
};