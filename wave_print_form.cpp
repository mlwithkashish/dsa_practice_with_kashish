// SINGH KASHISH
// 15-06-25
// TOPIC: Wave Print of a 2D Matrix (Column-wise)
#include<iostream>
using namespace std;
int main() {
    int row, col;

    // Step 1: Input dimensions
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[100][100];

    // Step 2: Input elements
    cout << "\nEnter elements of the matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Step 3: Wave Traversal (Column-wise)
    cout << "\nWave Print :\n";
    for(int j = 0; j < col; j++) {
        // even column index → top to bottom
        if(j % 2 == 0) {
            for(int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        // odd column index → bottom to top
        else {
            for(int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
/*
Enter number of rows: 3
Enter number of columns: 4

Enter elements of the matrix:
1 2 3 4
5 6 7 8
9 10 11 12

Wave Print :
1 5 9
10 6 2
3 7 11
12 8 4
*/