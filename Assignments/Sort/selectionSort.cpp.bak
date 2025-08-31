/*
Selection Sort steps for [5, 3, 21, 7, 5]

Initial array: [5, 3, 21, 7, 5]

Pass 1 (i = 0):
  - Find min from index 0..4 → min = 3 at index 1
  - Swap arr[0] and arr[1]
  - Array → [3, 5, 21, 7, 5]

Pass 2 (i = 1):
  - Find min from index 1..4 → min = 5 at index 1
  - Swap arr[1] with arr[1] (no change)
  - Array → [3, 5, 21, 7, 5]

Pass 3 (i = 2):
  - Find min from index 2..4 → min = 5 at index 4
  - Swap arr[2] and arr[4]
  - Array → [3, 5, 5, 7, 21]

Pass 4 (i = 3):
  - Find min from index 3..4 → min = 7 at index 3
  - Swap arr[3] with arr[3] (no change)
  - Array → [3, 5, 5, 7, 21]

Pass 5 (i = 4):
  - Only one element left, already sorted

Final sorted array = [3, 5, 5, 7, 21]
*/

#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr) {
	int len = arr.size();
	
	for (int i = 0; i < len; i++) {
		int minimumIdx = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[minimumIdx] > arr[j]) {
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