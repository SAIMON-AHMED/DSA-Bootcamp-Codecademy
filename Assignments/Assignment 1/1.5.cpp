/************************

 *******
 ·***** 
  ·***  
   ·*   


************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// take user's input for the number of rows
	int n;
	cin >> n;
	
	
	for (int i = 1; i <= n; i++) {
		// calculate the spaces and stars
		int spaces = i - 1;
		int stars = 2*n - i - spaces;
		
		// prints left spaces
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		
		// prints stars
		for (int j = spaces + 1; j <= stars + spaces; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
}