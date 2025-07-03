// SINGH KASHISH
// 18-06-25
// Topic: Smallest Missing Positive Integer
// Asked in: Google, Microsoft, Amazon, Adobe

#include <iostream>
using namespace std;

/*----------------------------------------
 APPROACH 1: CYCLIC SORT (Unsorted Array)
– Place each number x at index x-1 (e.g., 1 at index 0, 2 at 1, etc.)
– Then the first i where arr[i] != i+1 is the answer

Time: O(n)
 Space: O(1)
Used when input array is unsorted.
---------------------------------------- */

int firstMissingPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i]-1] != arr[i]) {
            swap(arr[i], arr[arr[i]-1]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }

    return n + 1;
}

/*
----------------------------------------
 APPROACH 2: BINARY SEARCH (Sorted Positive Array)
– Use binary search to find first index i where arr[i] != i+1

 Input must be:
– Sorted
– Contains only distinct positive integers

 Time: O(log n)
 Space: O(1)
----------------------------------------
*/

int findMissingSorted(int arr[], int n) {
    int low = 0, high = n - 1;
    int ans = n + 1; // default when no missing in middle

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid + 1) {
            // perfect till mid → go right
            low = mid + 1;
        } else {
            // mismatch found → go left
            ans = mid + 1; // potential missing
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    // Case 1: Unsorted array
    int arr1[] = {3, 4, -1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int missing1 = firstMissingPositive(arr1, n1);
    cout << " Smallest Missing Positive (Unsorted): " << missing1 << endl;//2

    // Case 2: Sorted array
    int arr2[] = {1, 2, 3, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int missing2 = findMissingSorted(arr2, n2);
    cout << " Smallest Missing Positive (Sorted): " << missing2 << endl; //4
    
    return 0;
}