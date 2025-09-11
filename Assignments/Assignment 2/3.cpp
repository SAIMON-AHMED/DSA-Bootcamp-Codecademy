// Left Rotate
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        
        if (n == 0 || k == 0)
        return;

        k %= n;
        // it brings elements from nums.begin() + (n - k) to end at the front
        std::rotate(nums.begin(), nums.begin() + (n - k), nums.end());
        
    }
};