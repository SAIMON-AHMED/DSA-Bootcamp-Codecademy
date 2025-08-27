// Merge Sort - Ascending Order
#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArrays(vector<int> &arr, int startIdx, int mid, int endIdx) {
	vector<int> tempArray;
	int i = startIdx, j = mid + 1;
	
	while (i <= mid || j <= endIdx) {
		if (i > mid) tempArray.push_back(arr[j++]);
		else if (j > endIdx) tempArray.push_back(arr[i++]);
		else {
			if (arr[i] < arr[j]) tempArray.push_back(arr[i++]);
			else tempArray.push_back(arr[j++]);
		}
	}
	
	int k = startIdx;
	for (int elem: tempArray) arr[k++] = elem;
}

void mergeSort(vector<int> &arr, int startIdx, int endIdx) {
	// Base Case
	if (startIdx >= endIdx) return;
	int mid = (startIdx + endIdx) / 2;
	
	
	mergeSort(arr, startIdx, mid);
	mergeSort(arr, mid + 1, endIdx);
	
	// Merge both sorted arrays
	mergeTwoSortedArrays(arr, startIdx, mid, endIdx);
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	mergeSort(arr, 0, arr.size() - 1);
	for (int elem: arr) cout << elem << ", ";
}