<<<<<<< HEAD
// Sum elem at even indices
#include <bits/stdc++.h>
using namespace std;

void sumElemAtEvenIndices(vector<int> &arr) {
	int sum = 0;
	int len = arr.size();
	for (int i = 0; i < len; i += 2) {
		sum+= arr[i];
	}
	cout << "Sum of elements at even indices: " << sum;
}

int main() {
	
	int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
	
	sumElemAtEvenIndices(arr);
=======
// Sum elem at even indices
#include <bits/stdc++.h>
using namespace std;

void sumElemAtEvenIndices(vector<int> &arr) {
	int sum = 0;
	int len = arr.size();
	for (int i = 0; i < len; i += 2) {
		sum+= arr[i];
	}
	cout << "Sum of elements at even indices: " << sum;
}

int main() {
	
	int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
	
	sumElemAtEvenIndices(arr);
>>>>>>> f0ea474 (Adding assignments)
}