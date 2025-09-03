// Longest Subarray with sum k
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int k) {
	int sum = 0;
	unordered_map<int, int> m;
	m[sum] = -1;
	int ans = 0; // longest length
	
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		if (m.find(sum - k) == m.end()) {
			m[sum] = i;
		}
		if (m.find(sum - k) != m.end() && ans < i - m[sum - k]) {
			ans = i - m[sum - k];
		}
	}
	return ans;	
}

int main() {
	vector<int> arr = {10, 5, 2, 7, 1, -10};
	int ans = longestSubarray(arr, 15);
	cout << "Answer: " << ans;
}