//SINGH KASHISH
//17-06-25 13:43
//Topic: Diagonal Sum In 2d Matrix(with function and time complexity)
//Asked in: Microsoft, Google, Amazon
#include<iostream>
using namespace std;

//Input Function(time: O(n^2))
void inputMatrix(int mat[][10],int n){
    cout<<"\nEnter elements of " << n << " matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
}

//Print Function (Time: O(n^2))
void printMatrix(int mat[][10] , int n){
    cout<<"\nMatrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
    cout<<endl;
    }
}

//Primary Diagonal Sum (Time: O(n))
int primaryDiagonalSum(int mat[][10], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
    }
    return sum;
}

//Secondary Diagonal Sum (Time: O(n))
// Diagonal: Top-right to Bottom-left (i + j == n - 1)
int secondaryDiagonalSum(int mat[][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][n - i - 1];
    }
    return sum;
}

//Total Diagonal Sum (Time: O(n))
int totalDiagonalSum(int mat[][10], int n){
    int sum=0;
    //O(n)
    for(int i=0;i<n;i++){
        sum+=mat[i][i]; //pd
        if(i !=n-i-1){
            sum+=mat[i][n-1-i]; //sd
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[10][10]; // assuming max 10x10 matrix

    inputMatrix(matrix, n);
    printMatrix(matrix, n);

    int pd = primaryDiagonalSum(matrix, n);
    int sd = secondaryDiagonalSum(matrix, n);
    int total = totalDiagonalSum(matrix, n);

    cout << "\nPrimary Diagonal Sum: " << pd << endl;
    cout << "Secondary Diagonal Sum: " << sd << endl;
    cout << "Total Diagonal Sum (Combined): " << total << endl;
}

/*
Enter size of square matrix: 3

Enter elements of 3 matrix:
1 2 3
4 5 6
7 8 9

Matrix:
1 2 3
4 5 6
7 8 9

Primary Diagonal Sum: 15
Secondary Diagonal Sum: 15
Total Diagonal Sum (Combined): 25
*/
/*
Microsoft/Google Often Ask: 
Clean function modularization (like your inputMatrix, printMatrix)

Optimization (avoid O(n²) when O(n) works)

Handling odd matrix cases gracefully

Dry run and explain your logic clearly

#Can this work for non-square matrix?
===>>>>No, diagonals are only well-defined for square matrices.


*/