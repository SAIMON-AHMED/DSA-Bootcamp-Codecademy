// Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int unique = 0;
        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[unique] != nums[i]) {
                nums[k] = nums[i];
                unique = i;
                k++;
            }
        }
        return k;
    }
};
