// Count Vowels
// String problem 1
#include <bits/stdc++.h>
using namespace std;

int countVowels(string str) {
	int count = 0;
	for (int c: str) {
		switch(c) {
			case 'a':
			 count++;
			 break;
			case 'e':
			 count++;
			 break;
			case 'i':
			 count++;
			 break;
			case 'o':
			 count++;
			 break;
			case 'u':
			 count++;
			 break;
			case 'A':
			 count++;
			 break;
			case 'E':
			 count++;
			 break;
			case 'I':
			 count++;
			 break;
			case 'O':
			 count++;
			 break;
			case 'U':
			 count++;
			 break;
			default:
				break;
		}
	}
	return count;
}

int main() {
	cout << "Please enter a string: ";
	string str;
	getline (cin, str);
	int res = countVowels(str);
	cout << res;
}