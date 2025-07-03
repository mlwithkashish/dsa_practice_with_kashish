#include<iostream>
using namespace std;
/* Matrix Pointers in C++
A 2D matrix is stored as an array of arrays. So, a matrix[3][3] is basically:
matrix → pointer to an array of 3 ints → int(*)[3]
*/
/*
 INTERVIEW NOTE:
Why column size is fixed? Because the compiler needs to know the jump size to go to the next row.
*/

//Passing Matrix TO Functions
void printMatrix1(int mat[][3], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

//Use Pointer With Fixed Column SIze
void printMatrix2(int (*mat)[3], int row) {
    cout << "\nMatrix (Method 2 - int (*mat)[3]):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
//Use Dounble Pointer
void printMatrix3(int **mat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
// Function with fixed column size
void sumMatrix(int mat[][3], int row) {
    int total = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < 3; j++)
            total += mat[i][j];
    
    cout << "\nTotal Sum: " << total << endl;
}

int main(){
//Declaration
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

printMatrix1(matrix, 3);
cout<<"\n\nThis is equivalent to the above mat is a pointer to an array of 3 ints.: \n";
printMatrix2(matrix, 3);
cout<<endl;
sumMatrix(matrix, 3); // matrix passed by reference (pointer)

// Dynamic matrix using double pointer
    int **dynMatrix = new int*[3];
    for (int i = 0; i < 3; i++) {
        dynMatrix[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            dynMatrix[i][j] = (i * 3) + j + 1;  // filling values 1–9
        }
    }

    printMatrix3(dynMatrix, 3, 3);

}
/* 
1 2 3
4 5 6
7 8 9


This is equivalent to the aboveÔÇömat is a pointer to an array of 3 ints.:

Matrix (Method 2 - int (*mat)[3]):
1 2 3
4 5 6
7 8 9


Total Sum: 45
1 2 3
4 5 6
7 8 9
Press any key to continue . . .

*/
/*
INTERVIEW QUESTIONS: GOOGLE/MICROSOFT/FLANG
"How is a 2D array passed to functions in C++?"	Pointer to array
"Why is column size mandatory when passing 2D array?"	Memory layout of arrays
"How do you create and delete dynamic 2D arrays?"	new, delete, double pointers
"Can a function accept 2D array of variable column size?"	Not directly in C++ without templates or vectors
"Difference between int mat[][3] and int **mat?"	Static vs dynamic allocation



// Deallocate memory
    for (int i = 0; i < 3; i++)
        delete[] dynMatrix[i];
    delete[] dynMatrix;

    return 0;
    
    
    */