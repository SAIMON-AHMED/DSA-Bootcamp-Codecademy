/*****************

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


*****************/



#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Please enter a number: ";
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		// prints upper-left stars
		int stars = i + 1;
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}
		
		// prints upper spaces
		int spaces = 2 * (n - i - 1);
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		
		// prints upper-right stars
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}
		
		cout << endl;		
	}
	
	// lower half
	for (int i = 0; i < n - 1; i++) {
		// prints upper-left stars
		int stars = n - i - 1;
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}
		
		// prints upper spaces
		int spaces = 2 * (i + 1);
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		
		// prints upper-right stars
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}
		
		cout << endl;		
	}
}