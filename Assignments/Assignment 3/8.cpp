class Solution {
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
public:
    int binarySearch(vector<int>& nums, int threshold) {
        // Find and store the iterator to the maximum element
        auto maxIt = max_element(nums.begin(), nums.end());


        // Dereference the iterator to get the value
        int start = 1;
        int end = *maxIt;
        
        int mid = 0;

        while (start < end) {
            mid = start + (end - start) / 2;
            long long sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                sum += ((nums[i] + mid - 1) / mid);
            }
            if (sum <= threshold) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = binarySearch(nums, threshold);
        return ans;
    }
};