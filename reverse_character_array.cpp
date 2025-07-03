// SINGH KASHISH
// 17-06-25 14:55
// Topic: Reverse a Character Array (In-Place)

#include <iostream>
using namespace std;
//  Time Complexity: O(n)
//  Reverses character array in-place using two-pointer approach
void reverseCharArray(char arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        // Swap characters
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

// Function to print char array
void printCharArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    // Test Case
    char arr[] = {'H', 'e', 'l', 'l', 'o'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printCharArray(arr, n);

    reverseCharArray(arr, n);

    cout << "Reversed Array: ";
    printCharArray(arr, n);

    return 0;
}
/*
Original Array: Hello
Reversed Array: olleH  */