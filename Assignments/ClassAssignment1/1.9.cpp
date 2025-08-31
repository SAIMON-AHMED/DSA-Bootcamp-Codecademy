// Palindrome Check
#include <bits/stdc++.h>
using namespace std;

bool palindromeChecker(vector<int>& arr) {
	bool isPalindrome = true;
	int start = 0;
	int end = arr.size() - 1;
	while (start <= end) {
		if (arr[start] != arr[end]) return false;
		start++;
		end--;
	}
	return true;
}

int main() {
	cout << "Please enter the length: ";
	int n;
	cin >> n;
	cout << "Please enter the array: ";
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++) cin >> arr[i];
	bool res = palindromeChecker(arr);
	cout << res;
}