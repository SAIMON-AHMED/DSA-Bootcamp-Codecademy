// Count Occurrences
#include <bits/stdc++.h>
using namespace std;

int count(vector<int>& arr, int target) {
	int n = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == target) n++;
	}
	return n;
}

int main() {
	cout << "Please enter the length: ";
	int n;
	cin >> n;
	cout << "Please enter the array: ";
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++) cin >> arr[i];
	cout << "Please enter target: ";
	int target;
	cin >> target;
	int res = count(arr, target); 
	cout << res;	
}