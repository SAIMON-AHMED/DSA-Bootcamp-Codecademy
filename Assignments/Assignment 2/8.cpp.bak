// Majority Elements
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
  map<int, int> m;
  for (int i = 0; i < nums.size(); i++) {
    if (m.find(nums[i]) != m.end()) {
      m[nums[i]]++;
    } else {
      m[nums[i]] = 1;
    }
  }
  for (auto &n: m) {
    if (n.second > (nums.size() / 2)) 
      return n.first;
  }
  return 0;
}

int main() {
	vector<int> nums = {3, 2, 3};
	int res = majorityElement(nums);
	cout << "Majority Element: " << res; 
}