#include<iostream>
using namespace std;
int main(){
    int row,col;

    //Input Rows And COls
    cout<<"\nEnter No. Of Rows And Colums: ";
    cin>>row>>col;

    //Declare Matrices
    int A[100][100] , B[100][100] , sum[100][100] , diff[100][100];

    //Input
    cout<<"\nEnter Elements Of Matrix A: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }

     cout<<"\nEnter Elements Of Matrix B: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>B[i][j];
        }
    }

    //Addition And Subtraction
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]= A[i][j]+ B[i][j];
            diff[i][j]= A[i][j] - B[i][j];
        }
    }

    //Sum Matrix
    cout<<"\nMatrix A+B(Addition): \n";
     for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    //Subtraction matrix
    cout << "\nMatrix A-B (Subtraction):\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
}
/*

Enter No. Of Rows And Colums: 3 3

Enter Elements Of Matrix A:
4 5 6
1 2 3
7 8 9

Enter Elements Of Matrix B:
5 6 8
4 5 3
1 2 3

Matrix A+B(Addition):
9 11 14
5 7 6
8 10 12

Matrix A-B (Subtraction):
-1 -1 -2
-3 -3 0
6 6 6
*/