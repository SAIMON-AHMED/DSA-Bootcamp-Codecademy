/******************

Solid Rhombus: 

		 ****
		****
	 ****
	****

Hollow Rhombus: 

		 ****
		*  *
	 *  *
	****


******************/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	cout << "Please enter a number: ";
	int n;
	cin >> n;
	
	// Solid Rhombus
	for (int i = 1; i <= n; i++) {
		// prints spaces
		int spaces = n - i;
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		
		// prints stars
		for (int j = 1; j <= n; j++) {
			cout << "*";
		}
		
		cout << endl;
	}
	
	// Hollow Rhombus
	for (int i = 1; i <= n; i++) {
    // leading spaces
    for (int s = 1; s <= n - i; s++) cout << ' ';

    // hollow block of width n
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n || j == 1 || j == n) cout << '*';
      else cout << ' ';
    }
    cout << '\n';
  }
	
}
