// 2nd Largest Element in Array
#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
  // code here
  int largest = arr[0];
  int secondLargest = -1;
      
    for (int i = 1; i < arr.size(); i++) {
      if (arr[i] > largest) {
        swap(largest, secondLargest);
        largest = arr[i];
      } else if (arr[i] > secondLargest && arr[i] != largest) {
        secondLargest = arr[i];
      }
    }
		return secondLargest;
}

int main() {
	vector<int> arr = {12, 35, 1, 10, 34, 1};
	int res = getSecondLargest(arr);
	cout << "Second Largest: " << res;
}