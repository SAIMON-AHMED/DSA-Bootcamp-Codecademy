// Bubble Sort - Recursive
#include <bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(vector<int> &arr, int endIdx) {
	if (endIdx == 0) return;
	bool isSwapped = false;
	
	for (int i = 0; i < endIdx; i++) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			isSwapped = true;
		}
	}
	if (!isSwapped) return;
	bubbleSortRecursive(arr, endIdx - 1);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	int len = arr.size() - 1;
	bubbleSortRecursive(arr, len);
	for (auto elem: arr) cout << elem << " ";
}