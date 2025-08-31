// Selection Sort - Recursive
#include<bits/stdc++.h>
using namespace std;

void selectionSortRecursive(vector<int> &arr, int minIdx) {
	int len = arr.size();
	// Base Case
	if (minIdx >= len) return;
	int cur = minIdx;
	
	for (int j = minIdx + 1; j < len; j++) {
		if (arr[minIdx] > arr[j]) minIdx = j;
	}
	swap(arr[cur], arr[minIdx]);
	minIdx = cur;
	
	selectionSortRecursive(arr, minIdx + 1);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	selectionSortRecursive(arr, 0);
	for (int elem: arr) cout << elem << ", ";
}