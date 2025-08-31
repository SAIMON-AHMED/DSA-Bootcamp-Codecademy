// Find and Replace in a Matrix
#include <bits/stdc++.h>
using namespace std;

void findAndReplace(vector<vector<int>>& arr, int t, int r) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			if (arr[i][j] == t) arr[i][j] = r;
		}
	}
}

int main() {
	cout << "Please enter row & column length: ";
	int R, C;
	cin >> R >> C;
	vector<vector<int>> arr(R, vector<int>(C));
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			cin >> arr[i][j];
		}
	}
	findAndReplace(arr, 4, 110);
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}