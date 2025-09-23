// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool feasible(vector<int>& weights, int capacity, int days) {
        int n = weights.size();
        int temp = 0;
        int count = 1;
        for(int w: weights) {
            if (w > capacity) {
                return false;
            } else if (temp + w > capacity) {
                count++;
                temp = w;
            } else {
                temp += w;
            }
        }
        if (count <= days) {
            return true;
        }

        return false;
    }

    int binarySearch(vector<int>& weights, int start, int end, int days) {
        while(start < end) {
            int mid = start + (end - start) / 2;
            if (feasible(weights, mid, days)) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxElem = 0;
        for (int w: weights) {
            sum += w;
            maxElem = max(maxElem, w);
        }

        int res = binarySearch(weights, maxElem, sum, days);
        return res;

    }
};