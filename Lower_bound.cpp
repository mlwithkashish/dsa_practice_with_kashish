// SINGH KASHISH
// 18-06-25
// Topic: Lower Bound & Upper Bound using Binary Search (Sorted Array)
// Asked in: Amazon, Google, Microsoft

#include<iostream>
using namespace std;

/*
----------------------------------------------------------
 Lower Bound:
– Returns index of first element >= x
– If no such element, returns n
– Time Complexity: O(log n)
----------------------------------------------------------
*/
int lowerBound(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = n; // default when x > all elements

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // Potential answer, go left to find smaller index
            high = mid - 1;
        } else {
            low = mid + 1;   // Go right
        }
    }

    return ans;
}

/*
----------------------------------------------------------
 Upper Bound:
– Returns index of first element > x
– If no such element, returns n
– Time Complexity: O(log n)
----------------------------------------------------------
*/
int upperBound(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;  // Default case when x >= all elements

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) {
            ans = mid;      // Potential answer, try to find earlier index
            high = mid - 1;
        } else {
            low = mid + 1;  // Go right
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 3, 3, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x1 = 4; // For lower bound
    int index1 = lowerBound(arr, n, x1);

    if (index1 < n)
        cout << "Lower Bound of " << x1 << " is at index: " << index1 << " (value: " << arr[index1] << ")" << endl;
    else
        cout << "No lower bound found (x > all elements)\n";


    int x2 = 7; // For upper bound
    int index2 = upperBound(arr, n, x2);

    if (index2 < n)
        cout << "Upper Bound of " << x2 << " is at index: " << index2 << " (value: " << arr[index2] << ")" << endl;
    else
        cout << "No upper bound found (x ≥ all elements)" << endl;

    return 0;
}
/*
Lower Bound of 4 is at index: 3 (value: 5)
Upper Bound of 5 is at index: 4 (value: 7)
*/