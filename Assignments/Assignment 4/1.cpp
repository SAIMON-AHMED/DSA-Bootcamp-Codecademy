// https://leetcode.com/problems/remove-outermost-parentheses/submissions/1780671642/
class Solution {
public:
    string removeOuterParentheses(string s) {
        int openParentheses = 0;
        string ans = "";
        for (char x : s) {
            if (x == '(')
                openParentheses++;
            else
                openParentheses--;

            if (openParentheses == 0 || openParentheses == 1 && x == '(')
                continue;

            ans += x;
        }
        return ans;
    }
};