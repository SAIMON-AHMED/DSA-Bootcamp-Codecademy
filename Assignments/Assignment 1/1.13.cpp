/*******************


	4 4 4 4 4 4 4
	4 3 3 3 3 3 4
	4 3 2 2 2 3 4
	4 3 2 1 2 3 4
	4 3 2 2 2 3 4
	4 3 3 3 3 3 4
	4 4 4 4 4 4 4


********************/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	cout << "Please enter a number: ";
	int n;
	cin >> n;
	
	for (int i = 1; i < 2 * n; i++) {
		for (int j = 1; j < 2 * n; j++) {
			int topDistance = i - 1;
			int leftDistance = j - 1;
			int bottomDistance = 2 * n - i - 1;
			int rightDistance = 2 * n - j - 1;
			cout << n - min({topDistance, leftDistance, bottomDistance, rightDistance}) << " ";
		}
		
		cout << endl;
	}
}