// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {

        int start = 0, end = nums.size() - 1;

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

    // left indices or first occurance
    int firstOccurance(vector<int>& nums, int start, int end, int target) {
        int left = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= target) {
                end = mid - 1;
                if (nums[mid] == target)
                    left = mid;
            } else {
                start = mid + 1;
            }
        }
        return left;
    }

    // last occurance
    int lastOccurance(vector<int>& nums, int start, int end, int target) {
        int right = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] <= target) {
                start = mid + 1;
                if (nums[mid] == target)
                    right = mid;
            } else {
                end = mid - 1;
            }
        }
        return right;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int returnedVal = binarySearch(nums, target);
        int left = -1, right = -1;
        vector<int> result = {left, right};
        if (returnedVal == -1) {
            return result;
        }
        int start = 0, end = returnedVal;
        left = firstOccurance(nums, start, end, target);

        start = returnedVal, end = nums.size() - 1;
        right = lastOccurance(nums, start, end, target);

        result[0] = left, result[1] = right;
        return result;
    }
};