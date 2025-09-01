// Move Zeroes
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
  // nums.erase(nums.begin() + i)
  int zeroes = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) {
      nums.erase(nums.begin() + i);
      i--;
      zeroes++;
    }
  }
  for (int i = 0; i < zeroes; i++) {
    nums.push_back(0);
  }
}

int main() {
	vector<int> nums = {0, 1, 0, 2, 0, 3};
	moveZeroes(nums);
	for (int n: nums) cout << n << " ";
}