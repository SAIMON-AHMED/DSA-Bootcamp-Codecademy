// Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  // count var
  // if not duplicate, count++
  // return count
  int k = 0; // count variable
  map<int, int> m;
  vector<int> res; 
  for (int n: nums) {
    if (m.find(n) == m.end()) { // not present
      k++;
      m[n] = 1;
      res.push_back(n);
    }
  }
  for (int i = 0; i < res.size(); i++) {
    nums[i] = res[i];
  }
  return k;
}

int main() {
	vector<int> nums = {1, 1, 2};
	int count = removeDuplicates(nums);
	cout << "Unique numbers: " << count;
}