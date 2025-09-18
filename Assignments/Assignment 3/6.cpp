// https://leetcode.com/problems/find-peak-element/
class Solution {
public:

    int binarySearch(vector<int>& nums, int start, int end) {
        int mid;
        while (start < end) {
            mid = start + (end - start) / 2;
            if (mid > 0 && mid < nums.size() - 1) {
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                    return mid;
                } else if (nums[mid] < nums[mid + 1]) {
                    start = mid + 1;
                } else {
                    end = mid;
                }
            } else {
                return -1;
            }
        }
        return mid;
    }
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return (n -1);
        return binarySearch(nums, 0, n - 1);

    }
};