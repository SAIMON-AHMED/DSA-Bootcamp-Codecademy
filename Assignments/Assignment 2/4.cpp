class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1)
        return;

        int left = 0;
        int right = 1;

        while (left < len && right < len) {
            if (nums[left] == 0 && nums[right] == 0) {
                right++;
            } else if (nums[left] != 0 && nums[right] == 0) {
                left++;
                right++;
            } else if(nums[left] != 0 && nums[right] != 0) {
                left++;
                right++;
            } else {
                swap(nums[left], nums[right]);
                left++;
                right++;
            }
        }
    }
};