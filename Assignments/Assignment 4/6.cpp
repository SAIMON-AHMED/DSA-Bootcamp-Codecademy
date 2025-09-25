// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
        return false;

        vector<int> ans(128, 0);

        for (auto x: s) 
        ans[x]++;

        for (auto x: t) {
            if (ans[x] == 0) {
                return false;
            }

            ans[x]--;
        }

        return true;
        
    }
};