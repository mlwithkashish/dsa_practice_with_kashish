// SINGH KASHISH
// 15-06-25 09:07
// TOPIC: Insertion Sort on Character Array (Descending Order)
// Very Important for End Sem + Interviews (TCS, Infosys, Wipro, Google)

#include<iostream>
using namespace std;

// Function to print the array
void printArray(char arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform Insertion Sort in descending order
void insertionSortDescending(char arr[], int n) {
    for(int i = 1; i < n; i++) {
        char key = arr[i];           // Pick current character
        int j = i - 1;

        // Shift elements greater than key to the right (for descending)
        while(j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }
}

int main() {
    char arr[] = {'d', 'b', 'a', 'e', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    insertionSortDescending(arr, n);

    cout << "Sorted in Descending Order: ";
    printArray(arr, n);

    return 0;
}

/*
----------------------------------------------------
 TIME & SPACE COMPLEXITY:
----------------------------------------------------
Time Complexity:
– Best Case: O(n) [if already sorted]
– Average/Worst: O(n^2)

Space Complexity: O(1) – In-place sort

 Insertion Sort is:
– Stable (maintains order of duplicates)
– Good for small datasets
– Used in hybrid algorithms like TimSort
----------------------------------------------------
*/
