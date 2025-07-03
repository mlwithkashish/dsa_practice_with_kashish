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

    cout<<endl;

    //Wave Print
    for(int i=row-1;i>=0;i--){
        if(i%2!=0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ 
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
/*

Enter number of rows: 3
Enter number of columns: 3

Enter elements of the matrix:
1 2 3
4 5 6
7 8 9

9 8 7 4 5 6 3 2 1

*/