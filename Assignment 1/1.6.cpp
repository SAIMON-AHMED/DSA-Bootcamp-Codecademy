/********************

		 *      spaces = 3 & stars = 1
		***     spaces = 2 & stars = 3
	 *****    spaces = 1 & stars = 5
	******* 	spaces = 0 & stars = 7
	*******   spaces = 0 & stars = 7
	 *****    spaces = 1 & stars = 5
		***     spaces = 2 & stars = 3
		 *      spaces = 3 & stars = 1
		 
n = 4

********************/

#include <bits/stdc++.h>
using namespace std;

// upper half
void upperHalf(int n) {
		
	/*
		 *      spaces = 3 & stars = 1
		***     spaces = 2 & stars = 3
	 *****    spaces = 1 & stars = 5
	******* 	spaces = 0 & stars = 7
	
	*/
	for (int i = 1; i <= n; i++) {
		// calculate the number of spaces and stars
		int spaces = n - i;
		int stars = 2 * i - 1;
		
		// prints spaces
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		
		// prints stars
		for (int j = spaces + 1; j <= spaces + stars; j++) {
			cout << "*";
		}
		
		cout << endl;		
	}
}


// lower half
void lowerHalf(int n) {

	/*
	
	*******   spaces = 0 & stars = 7
	 *****    spaces = 1 & stars = 5
		***     spaces = 2 & stars = 3
		 *      spaces = 3 & stars = 1
	
	*/
	for (int i = 1; i <= n; i++) {
		// calculate the number of spaces and stars
		int spaces = i - 1;
		int stars = 2 * n - i;
		
		// prints spaces 
		for (int j = 1; j <= spaces; j++) {
			cout << " ";			
		}
		
		// prints stars
		for (int j = spaces + 1; j <= stars; j++) {
			cout << "*";
		}
		
		cout << endl;
	}
}

int main() {
	
	// take user's input for the number of rows
	int n;
	cout << "Please enter an input number for the diamond: ";
	cin >> n;
	upperHalf(n);
	lowerHalf(n);
}

