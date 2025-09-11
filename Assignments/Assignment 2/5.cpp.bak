// Missing Numbers
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  int len = nums.size();
  int ans = len;
  for (int i = 0; i < len; i++) {
    if (nums[i] != i) {
      ans = i;
      return ans;
    }
  }
    return ans;
}

int main() {
	vector<int> nums = {0, 1, 3};
	int res = missingNumber(nums);
	cout << "Missing Number is: " << res;
}