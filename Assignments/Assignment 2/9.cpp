// Two Sum
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); i++) {
    int potentialMatch = target - nums[i];
    if (m.find(potentialMatch) != m.end()) { // potential match found
      return {m[potentialMatch], i};
    } else {
      m[nums[i]] = i;
    }
  }
  return {};
}

int main() {
	vector<int> nums = {2,7,11,15};
	vector<int> result(2);
	result = twoSum(nums, 9);
	for (int n: result) cout << n << " ";
}