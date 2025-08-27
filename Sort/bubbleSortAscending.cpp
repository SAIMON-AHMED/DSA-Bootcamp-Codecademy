// Bubble Sort - Ascending Order
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
	int len = arr.size();
	bool isSwapped;
	
	for (int i = len - 1; i > 0; i--) {
		isSwapped = false;
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if (!isSwapped) break;
	}
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	bubbleSort(arr);
	for (auto elem: arr) cout << elem << " ";
}