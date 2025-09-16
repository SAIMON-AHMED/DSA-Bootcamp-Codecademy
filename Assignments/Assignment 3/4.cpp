// https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution {
  public:
  
    int findRotation(vector<int>& nums, int start, int end) {

        int mid = 0;
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
        return mid;
    }
    int findKRotation(vector<int> &arr) {
        if (arr.size() <= 1 || arr[0] < arr[arr.size() - 1]) {
            return 0;
        }
        return findRotation(arr, 0, arr.size() - 1);
        
    }
};
