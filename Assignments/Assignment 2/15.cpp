// Array Leaders
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
  vector<int> ans;
  int len = arr.size();
  int maxRight = 0; // array contains all positive numbers
        
  for (int i = len - 1; i >= 0; i--) {
    if (arr[i] >= maxRight) {
      maxRight = arr[i];
      ans.push_back(maxRight);
    }
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
	vector<int> arr = {16, 17, 4, 3, 5, 2};
	vector<int> ans = leaders(arr);
	for (int n: ans) cout << n << " ";
}