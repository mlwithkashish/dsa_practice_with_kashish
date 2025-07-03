//Singh Kashish
//17-06-25 14:14
//  Topic: Search in a Sorted 2D Matrix using Staircase Search (Asked in Google, Amazon, Microsoft)
//  Time Complexity: O(n + m) | Space Complexity: O(1)
#include<iostream>
using namespace std;
//O(n+m)
bool stairCaseSearch(int mat[] [10], int n , int m, int key){
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        if(mat[row][col]==key){
            cout<<" Found at cell: (" <<row<<" , "<<col <<")\n";
            return true;
        }
        else if(mat[row][col] == key){
            col--; //move left
        }
        else {
            row++; //move down
        }
    }

    cout<<"Element not Found.\n";
    return false;
}

//  Input function (Time: O(n*m))
void inputMatrix(int mat[][10], int n, int m) {
    cout << "\nEnter elements of " << n << "x" << m << " sorted matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
}

//  Print function
void printMatrix(int mat[][10], int n, int m) {
    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int n, m, target;
    cout << "Enter rows and columns of matrix: ";
    cin >> n >> m;

    int matrix[10][10];

    inputMatrix(matrix, n, m);
    printMatrix(matrix, n, m);

    cout << "Enter target to search: ";
    cin >> target;

    stairCaseSearch(matrix, n, m, target);

    return 0;
}
/*
Enter rows and columns of matrix: 3 3

Enter elements of 3x3 sorted matrix:
1 2 3
4 5 6
7 8 9

Matrix:
1 2 3
4 5 6
7 8 9
Enter target to search: 6
 Found at cell: (1 , 2)
Press any key to continue . . .


*/
/*
 Interview Insight:
 Asked In	Focus Area
Google	Matrix optimization techniques
Microsoft	Edge handling, boundaries
Amazon	Logic control, condition checks
Adobe, Flipkart	Matrix traversal patterns
*/