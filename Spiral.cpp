
// SINGH KASHISH
// 15-06-25 09:30
// TOPIC: 2D Arrays – Spiral Matrix Traversal Jalebi jaisa GOL
// Very Important for Placements, End Sem, and Google/Amazon Interviews

#include<iostream>
using namespace std;

void spiralPrint(int arr[][4], int row, int col) {
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    cout << "Spiral Order: ";

    while (top <= bottom && left <= right) {
        // Step 1: Print Top Row → →
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Step 2: Print Right Column ↓ ↓
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Step 3: Print Bottom Row ← ← (if remaining)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Step 4: Print Left Column ↑ ↑ (if remaining)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    spiralPrint(arr, 3, 4);

    return 0;
}

/*
------------------------------------------------------------
OUTPUT:
Spiral Order: 1 2 3 4 8 12 11 10 9 5 6 7

------------------------------------------------------------
TIME & SPACE COMPLEXITY:

Time: O(rows × cols) → each element is visited once  
Space: O(1) → No extra space used

------------------------------------------------------------
*/

