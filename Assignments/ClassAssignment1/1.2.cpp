// Sum elem at even indices
#include <bits/stdc++.h>
using namespace std;

void largestElement(vector<int> &arr) {
	int len = arr.size();
	int max = arr[0];
	for (int i = 1; i < len; i++) {
		if (max < arr[i]) max = arr[i];
	}
	cout << "Largest Element: " << max;
}

int main() {
	
	int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
	
	largestElement(arr);
}