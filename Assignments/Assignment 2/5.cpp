class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2; // sum formula

        int curSum = 0;
        for (int elem: nums) {
            curSum += elem;
        }   

        return expectedSum - curSum;
    }
};