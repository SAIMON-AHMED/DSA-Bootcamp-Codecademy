// Even or Odd
#include <bits/stdc++.h>
using namespace std;

bool evenOrOdd(int num) {
	return num % 2 == 0;
}

int main() {
	cout << "Please enter a number: ";
	int n;
	cin >> n;
	bool res = evenOrOdd(n);
	if (res) cout << "Even";
	else cout << "Odd";
}