// Single Number
// Required: Time -> O(n) Space -> O(1); n is the size of the array

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
  //sort(nums.begin(), nums.end()); // O(nlogn)
  int unique = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		unique = unique ^ nums[i];
	}
  /*for (int i = 1; i < nums.size() - 1; i++) {
    if (unique == nums[i]) {
      unique = nums[i + 1];
      i++;
    }
  } */
  return unique;
}

int main() {
	vector<int> nums = {1, 0, 2, 3, 4, 4, 3, 1, 0};
	int res = singleNumber(nums);
	cout << "Single Number is: " << res;
}