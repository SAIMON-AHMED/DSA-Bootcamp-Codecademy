// Insertion Sort - Recursive
#include<bits/stdc++.h>
using namespace std;

void insertionSortRecursive(vector<int> &arr, int start) {
	int len = arr.size();
	// Base Case
	if (start >= len) return;
	
	for (int i = start; i > 0; i--) {
		if (arr[i] < arr[i - 1]) swap(arr[i], arr[i - 1]);
		else break;
	}
	
	// Recursive Call
	insertionSortRecursive(arr, start + 1);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	insertionSortRecursive(arr, 1);
	for (int elem: arr) cout << elem << ", ";
}