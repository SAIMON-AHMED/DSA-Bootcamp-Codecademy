// https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end) {
        int mid;
        while (start < end) {
            mid = start + (end - start) / 2;
            if (mid == 0 && nums[mid] != nums[mid + 1]) {
                return mid;
            }
            if (mid == nums.size() - 1 && nums[mid] != nums[mid - 1]) {
                return mid;
            } 
            if (mid > 0 || mid < nums.size() - 1) {
                if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                    return mid;
                }
            }
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1]) {
                    start = mid + 1;
                }
                if (nums[mid] == nums[mid - 1]) {
                    end = mid - 1;
                }
            }
            if (mid % 2 != 0) {
                if (nums[mid] == nums[mid - 1]) {
                    start = mid + 1;
                }
                if (nums[mid] == nums[mid + 1]) {
                    end = mid - 1;
                }
            }
        }
        return start;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int idx = binarySearch(nums, 0, nums.size() - 1);
        return nums[idx];
    }
};