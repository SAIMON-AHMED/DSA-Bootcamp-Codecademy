<<<<<<< HEAD
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
		
		/***********

			 ****   *  *
			*  *
		 *  *
		*****  *

		************/
		int spaces = n - i;
		// print first & last line
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
			
			for (int j = 1; j<= n; j++) {
				cout << "*";
			}
		} else if (i == n) {
			for (int j = 1; j <= n; j++) {
				cout << "*";
			}
		}
		for (int j = 1; j <= 2 * n; j++) {
			if (i + j == n + 1 || i + j == 2 * n) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	
=======
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
		
		/***********

			 ****   *  *
			*  *
		 *  *
		*****  *

		************/
		int spaces = n - i;
		// print first & last line
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
			
			for (int j = 1; j<= n; j++) {
				cout << "*";
			}
		} else if (i == n) {
			for (int j = 1; j <= n; j++) {
				cout << "*";
			}
		}
		for (int j = 1; j <= 2 * n; j++) {
			if (i + j == n + 1 || i + j == 2 * n) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	
>>>>>>> f0ea474 (Adding assignments)
}