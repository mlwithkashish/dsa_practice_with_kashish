// SINGH KASHISH
// 15-06-25
// TOPIC: 2D Arrays – Declaration, Initialization, Input, Output
//2d array is represented as contiguos block of memory cells(linearly)
#include<iostream>
using namespace std;

int main() {
    //  Declaration of 2D Array (3 rows, 4 columns)
    int arr[3][4];

    //  Taking input from user
    cout << "Enter 12 elements for a 3x4 array:\n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

    //  Printing the 2D array (Row-wise)
    cout << "\nRow-wise Print:\n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    //  Column-wise Print
    cout << "\nColumn-wise Print:\n";
    for(int col = 0; col < 4; col++) {
        for(int row = 0; row < 3; row++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    //  Accessing a single element: arr[1][2]
    cout << "\nElement at row 1, col 2: " << arr[1][2] << endl;

    return 0;
}
/*
Enter 12 elements for a 3x4 array:
5 6 3 2
4 6 2 3
1 5 3 6

Row-wise Print:
5 6 3 2
4 6 2 3
1 5 3 6

Column-wise Print:
5 4 1
6 6 5
3 2 3
2 3 6
*/
