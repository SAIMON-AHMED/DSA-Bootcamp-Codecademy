// Linear Search
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target) {
	int len = arr.size();
	for (int i = 0; i < len; i++) {
		if (arr[i] == target) return i;
	}
	return -1;
}

int main() {
	vector<int> arr = {5, 1, 4, 2};
	int target = 4;
	int res = search(arr, target);
	cout << res;
}