//Sorting elements in descending order using selection sort
#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr) {
	int len = arr.size();
	
	for (int i = 0; i < len; i++) {
		int minimumIdx = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[minimumIdx] < arr[j]) {
				minimumIdx = j;
			}
		}
		swap(arr[i], arr[minimumIdx]);
	}
}

int main() {
	vector<int> arr = {5, 3, 21, 7, 5};
	selectionSort(arr);
	for (int i: arr) {
		cout << i << " ";
	}
}
