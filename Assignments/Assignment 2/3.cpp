// Left Rotate
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k) {
	vector<int> result;
	int n = nums.size();
  if (k > n) {
		k = k % n;
  }

  for (int i = k; i > 0; i--) {
    result.push_back(nums[n - i]);
  }
  for (int i = 0; i < n - k; i++) {
    result.push_back(nums[i]);
  }

  for (int i = 0; i < result.size(); i++) {
    nums[i] = result[i];
  }
}



int main() {
	vector<int> nums = {1, 2, 3, 4, 5, 6};
	rotate(nums, 2);
	for (int elem: nums) cout << elem << " ";
}