// SINGH KASHISH
// 18-06-25
// Topic: First Occurrence of Target in Sorted Array
// Asked in: Google, Microsoft, Amazon

#include <iostream>
using namespace std;

/*
----------------------------------------------------------
 First Occurrence using Binary Search:
– Goal: Return the **first index** where arr[i] == x
– If not found, return -1

Time Complexity: O(log n)
Space Complexity: O(1)
----------------------------------------------------------
*/

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid;       // Store index, but continue left to find earlier occurrence
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int index = firstOccurrence(arr, n, x);

    if (index != -1)
        cout << "First occurrence of " << x << " is at index: " << index << endl;
    else
        cout << x << " not found in the array." << endl;

    return 0;
}
