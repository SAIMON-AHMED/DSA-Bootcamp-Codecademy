// Stock buy & sell
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  int buy = prices[0];
  int sell = 0;
  for (int i = 0; i < prices.size() - 1; i++) {
    if (buy > prices[i]) {
      buy = prices[i];
    }
    sell = max(sell, (prices[i + 1] - buy));
  }
  return sell;
}

int main() {
	vector<int> prices = {7,1,5,3,6,4};
	int ans = maxProfit(prices);
	cout << "Max profit is: " << ans;
}