// Sort Colors
#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArrays(vector<int>& nums, int start, int mid, int end) {
  int i = start, j = mid + 1;
  vector<int> tempArr;
  while (i <= mid || j <= end) {
    if (i > mid) {
      tempArr.push_back(nums[j++]);
    } else if (j > end) {
      tempArr.push_back(nums[i++]);
    } else if (nums[i] > nums[j]) {
      tempArr.push_back(nums[j++]);
    } else {
      tempArr.push_back(nums[i++]);
    }
  }
  int k = start;
  for (int elem: tempArr) {
    nums[k++] = elem;
  }
}

void mergeSort(vector<int>& nums, int start, int end) {
  // Base Case
  if (start >= end) return;
        
  // Find Mid
  int mid = (start + end) / 2;

  // Recursive Call
  mergeSort(nums, start, mid);
  mergeSort(nums, mid + 1, end);

  // Merge Two Sorted Arrays
  mergeTwoSortedArrays(nums, start, mid, end);
}

void sortColors(vector<int>& nums) {
  mergeSort(nums, 0, nums.size() - 1);
}

int main() {
	vector<int> nums = {2,0,2,1,1,0};
	sortColors(nums);
	for (int n: nums)
		cout << n << " ";
}