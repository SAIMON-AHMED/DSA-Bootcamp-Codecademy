// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution {
  public:
  
    bool feasible(vector<int>& arr, int key, int student) {
        long long temp = 0;
        int count = 1;
        for (int book: arr) {
            if (book > key) {
                return false;
            } else if (temp + book > key) {
                count++;
                temp = book;
            } else {
                temp += book;
            }
        }
        if (count <= student) {
            return true;
        }
        return false;
    }
  
    int binarySearch(vector<int>& arr, int start, long long end, int student) {
        while(start < end) {
            int mid = start + (end - start) / 2;
            if (feasible(arr, mid, student)) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return end;
    }
    
    int findPages(vector<int> &arr, int k) {
        int minPage = INT_MAX;
        long long maxPage = 0;
        int n = 0; // number of books
        
        for (int book: arr) {
            minPage = min(book, minPage);
            maxPage += book;
            n++;
        }
        
        if (k > n) {
            return -1;
        }
        
        int res = binarySearch(arr, minPage, maxPage, k);
        return res;
        
    }
};