// SINGH KASHISH
// 18-06-25
// Topic: Binary Search (Iterative vs Recursive)
// Asked in: Google, Amazon, Microsoft, Adobe
/* Time & Space Complexity
Version	   |    Time Complexity |	 Space Complexity
Iterative  |    O(log n)	    |      O(1)
Recursive  |    O(log n)	    |       O(log n) due to function call stack
*/
#include<iostream>
using namespace std;

// Iterative Binary Search
int iterativeBinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid; // Found
        else if(arr[mid] < target)
            low = mid + 1; // Move right
        else
            high = mid - 1; // Move left
    }

    return -1; // Not found
}

//  Recursive Binary Search
int recursiveBinarySearch(int arr[], int low, int high, int target) {
    if(low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if(arr[mid] == target)
        return mid;
    else if(arr[mid] < target)
        return recursiveBinarySearch(arr, mid + 1, high, target);
    else
        return recursiveBinarySearch(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Iterative Search
    int result1 = iterativeBinarySearch(arr, n, target);
    cout << "Iterative: ";
    if(result1 != -1)
        cout << "Element found at index " << result1 << endl;
    else
        cout << "Element not found.\n";

    // Recursive Search
    int result2 = recursiveBinarySearch(arr, 0, n - 1, target);
    cout << "Recursive: ";
    if(result2 != -1)
        cout << "Element found at index " << result2 << endl;
    else
        cout << "Element not found.\n";

    return 0;
}
/*

What Can Interviewers Ask About This?
These are commonly asked in interviews at Microsoft, Google, Adobe, etc.

❓ Typical Interview Questions:
✅ Can you implement binary search using recursion instead of iteration?
👉 To check your recursion understanding and logic flow.

✅ What is the time and space complexity of recursive binary search?

Time: O(log n)

Space: O(log n) due to recursive call stack

✅ Can recursion lead to stack overflow?
👉 Yes, if the array is huge or recursion is poorly controlled.

✅ Modify this to find first or last occurrence of an element (when duplicates exist)
👉 This checks if you can extend the concept.

✅ When would you prefer iterative over recursive?
👉 Prefer iterative in performance-critical or memory-constrained environments.


*/