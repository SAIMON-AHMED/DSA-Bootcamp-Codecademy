class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int occurance = 1;
        for (int n: nums) {
            if (ans != n) {
                occurance--;
            } else {
                occurance++;
            }
            if (occurance <= 0) {
                ans = n;
                occurance = 1;
            }
        }
        return ans;
    }
};