// Bubble Sort - Recursive
#include<bits/stdc++.h>
using namespace std; 

void bubbleSortRecursive(vector<int> &arr, int end) {
	// Base Case
	if (end <= 0) return;
	int len = arr.size();
	bool isSwapped = false;
	for (int j = 0; j < end; j++) {
		if (arr[j] > arr[j + 1]) {
			swap(arr[j], arr[j + 1]);
			isSwapped = true;
		}
	}
	if (!isSwapped) return;
	
	// Recursive Call
	bubbleSortRecursive(arr, end - 1);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	bubbleSortRecursive(arr, arr.size() - 1);
	for (int elem: arr) cout << elem << ", ";
}