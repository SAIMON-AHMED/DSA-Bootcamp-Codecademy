// Binary Search
// Elements must be sorted
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int start, int end, int target) {
	// Base Case
	if (start >= end) return -1;
	
	int mid = (start + end) / 2;
		
	if (arr[mid] == target) return mid;
	else if (arr[mid] > target) end = mid - 1;
	else start = mid + 1;
	
	return search(arr, start, end, target);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	int res = search(arr, 0, 3, 4);
	cout << res;
}