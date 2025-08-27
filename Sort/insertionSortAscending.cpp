// Insertion Sort - Ascending Order
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
	int len = arr.size();
	for (int i = 1; i < len; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) swap(arr[j], arr[j -1]);
			else break;
		}
	}
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	insertionSort(arr);
	for (int elem: arr) cout << elem << " ";
}