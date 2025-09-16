// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int findRotation(vector<int>& nums) {

        int start = 0, end = nums.size() - 1, mid = 0;
        if (nums[start] <= nums[end]) {
            return start;
        }
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[start] == nums[end]) {
                return mid;
            }
            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return max(-1, mid);
    }
    int binarySearch(vector<int>& nums, int target, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() <= 1 && nums[0] != target) {
            return -1;
        }
        int pivot = findRotation(nums); // finding the pivot

        // left side
        int start = 0, end = pivot - 1;
        int left = binarySearch(nums, target, start, end);
        // right side
        start = pivot, end = nums.size() - 1;
        int right = binarySearch(nums, target, start, end);
        return max(left, right);
    }
};