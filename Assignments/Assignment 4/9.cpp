// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int count = 0;

        for (auto c: s) {

            if (c == '(')
            depth++;

            if (c == ')')
            depth--;
            
            count = max(depth, count);
        }
        return count;
    }
};