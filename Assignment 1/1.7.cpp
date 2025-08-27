/*************************

1              // position 1 + 1 = 2 is occupied with 1
0 1						 // position 2 + 1 = 3 is occupied with 0 and 2 + 2 = 4 is occupied with 1
1 0 1   
0 1 0 1
1 0 1 0 1

// every even position is occupied with 1 and every odd position is occupied with 0.
*************************/

#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n; // user's input

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if ((i + j) % 2 == 0) {
				cout << "1 ";
			} else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
}
