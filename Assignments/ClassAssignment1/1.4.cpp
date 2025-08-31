// Count Positives
#include <bits/stdc++.h>
using namespace std;

int countPositive(vector<int>& arr) {
	int count = 0;
	for(int elem: arr) {
		if (elem > 0) count++;
	}
	return count;
}

int main() {
	cout << "Please enter the length: ";
	int n;
	cin >> n;
	cout << "Please enter the array: ";
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++) cin >> arr[i];
	int res = countPositive(arr);
	cout << res;
}