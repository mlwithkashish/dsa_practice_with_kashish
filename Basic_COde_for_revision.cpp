// SINGH KASHISH
// 17-06-25
// Topic: 2D Vectors in C++ – All Functions, Loops, and Interview Notes

#include <iostream>
#include <vector>
using namespace std;

// Print 2D vector (pass-by-reference)
void print2DVector(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }
}

//  Input 2D vector
void input2DVector(vector<vector<int>>& matrix, int rows, int cols) {
    matrix.resize(rows, vector<int>(cols)); // Resize outer and inner vectors
    cout << "Enter elements (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
}

//  Modify 2D vector inside function
void modify2DVector(vector<vector<int>>& matrix) {
    if (!matrix.empty())
        matrix[0][0] = 999; // Example: Modify first element
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Declaration
    vector<vector<int>> matrix;

    input2DVector(matrix, rows, cols);

    cout << "\nMatrix:\n";
    print2DVector(matrix);

    modify2DVector(matrix); // Call modifying function

    cout << "\nAfter Modification:\n";
    print2DVector(matrix);

    return 0;
}
/*
Enter number of rows and columns: 3 3
Enter elements (3x3):
1 2 3
4 5 6
7 8 9

Matrix:
1 2 3
4 5 6
7 8 9

After Modification:
999 2 3
4 5 6
7 8 9
*/