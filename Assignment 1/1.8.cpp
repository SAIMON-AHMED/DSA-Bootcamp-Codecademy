<<<<<<< HEAD
/*******************

Pattern:

1      1
12    21
123  321
12344321

*******************/

#include <bits/stdc++.h>
using namespace std;



int main() {
	
	// take user's input 
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		// prints left side
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		// prints spaces in the middle
		int spaces = 2 * n - i;
		for (int j = i + 1; j <= spaces; j++) {
			cout << " ";
		}
		
		// prints right side
		for (int j = spaces + 1; j <= 2 * n; j++) {
			cout << 2 * n - j + 1;
		}
		cout << endl;
	}
	
	
=======
/*******************

Pattern:

1      1
12    21
123  321
12344321

*******************/

#include <bits/stdc++.h>
using namespace std;



int main() {
	
	// take user's input 
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		// prints left side
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		// prints spaces in the middle
		int spaces = 2 * n - i;
		for (int j = i + 1; j <= spaces; j++) {
			cout << " ";
		}
		
		// prints right side
		for (int j = spaces + 1; j <= 2 * n; j++) {
			cout << 2 * n - j + 1;
		}
		cout << endl;
	}
	
	
>>>>>>> f0ea474 (Adding assignments)
}