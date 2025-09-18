// https://leetcode.com/problems/sqrtx/
class Solution {
public:
    long long binarySearch(int x, int start, int end) {
        long long mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (mid * mid <= x && (mid + 1) * (mid + 1) > x) {
                return mid;
            } else if (mid * mid < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return mid;
    }
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int start = 1, end = x/2;
        return binarySearch(x, start, end);
    }
};