// Maximum Subarray – Brute Force, Optimized & Kadane's Algorithm
// Author: Singh Kashish
// Date: 11-06-2025 11:41
// Topic: 1D Arrays – Subarrays
// Very Important for Placements & DSA Concepts
// Asked in: Amazon, Google, Microsoft, Adobe, Flipkart, Walmart

#include <iostream>
#include <climits>
using namespace std;
/*
------------------------------------------------------------
FUNCTION: maxSubarraySum1 (Brute Force)
Description:
    Tries all possible subarrays and calculates their sum.

Time Complexity: O(n^3)
Space Complexity: O(1)
------------------------------------------------------------
*/

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << "\n\n";
    }

    cout << "Maximum Subarray Sum (O(n^3)) = " << maxSum << endl;
}
/*
------------------------------------------------------------
FUNCTION: maxSubarraySum2 (Slightly Optimized – O(n^2))
Description:
    Instead of calculating sum again and again,
    it builds currSum in inner loop to avoid extra work.

Time Complexity: O(n^2)
Space Complexity: O(1)
------------------------------------------------------------
*/

void maxSubarraySum2(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << "\n\n";
    }

    cout << "Maximum Subarray Sum (O(n^2)) = " << maxSum << endl;
}
/*
------------------------------------------------------------
FUNCTION: maxSubarraySum3 (Kadane's Algorithm – O(n))
Description:
    Maintains a running current sum.
    If current sum goes below 0, reset to 0.

NOTE:
    This standard Kadane's doesn't work when all elements are negative.
    For such cases, we must avoid resetting to 0 blindly.

Time Complexity: O(n)
Space Complexity: O(1)
------------------------------------------------------------
*/

void maxSubarraySum3(int *arr, int n)
{
    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Subarray Sum (Kadane's O(n)) = " << maxSum << endl;
}

int main()
{
    int arr[5] = {2, -3, 6, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << "\n==> Using Brute Force (O(n^3))\n\n";
    maxSubarraySum1(arr, n);

    int arr2[5] = {-1, 5, -4, 6, 2};
    cout << "\n==> Using Slightly Optimized (O(n^2))\n\n";
    maxSubarraySum2(arr2, n);

    int arr3[5] = {-1, 5, -4, 6, 2};
    cout << "\n==> Using Kadane's Algorithm (O(n))\n";
    maxSubarraySum3(arr3, n);

    int arr4[5] = {-3, -4, -6, -1, -9};  // All-negative case
     cout << "\n==> Testing Kadane’s on All-Negative Array\n";
    maxSubarraySum3(arr4, 5);  // Observe how it handles this

    return 0;
}

/* 
OUTPUT:

==> Using Brute Force (O(n^3))

2, -1, 5, 0, 4,

-3, 3, -2, 2,

6, 1, 5,

-5, -1,

4,

Maximum Subarray Sum (O(n^3)) = 6

==> Using Slightly Optimized (O(n^2))

-1, 4, 0, 6, 8,

5, 1, 7, 9,

-4, 2, 4,

6, 8,

2,

Maximum Subarray Sum (O(n^2)) = 9

==> Using Kadane's Algorithm (O(n))
Maximum Subarray Sum (Kadane's O(n)) = 9

==> Testing KadaneÔÇÖs on All-Negative Array
Maximum Subarray Sum (Kadane's O(n)) = -1


*/


/*
📌 Most Asked Interview Questions:

Q1: Difference between Subarray and Subsequence?
Ans:
- Subarray: Contiguous block of elements (e.g. {2, -3, 6})
- Subsequence: Can skip elements, but maintain order (e.g. {2, 6})

Q2: Why Kadane's doesn't work on all-negative arrays?
Ans:
- Because it resets currSum to 0 when currSum < 0.
- This gives incorrect answer (0), instead of the least negative element.
- Fix: Don’t reset to 0; track max from array directly.

Q3: Which companies asked this?
✅ Amazon ✅ Microsoft ✅ Adobe ✅ Google ✅ Flipkart ✅ Walmart
*/

