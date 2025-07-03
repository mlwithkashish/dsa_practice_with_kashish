// SINGH KASHISH
// 15-06-25
// TOPIC: Matrix Multiplication (A x B)
#include<iostream>
using namespace std;
int main(){
    int row1 , col1 , row2 , col2;

    //INPUT
   cout<<"Enter Rows and Columns Of Matrix A: ";
   cin>>row1>>col1;

   cout<<"Enter Rows and Columns Of Matrix B: ";
   cin>>row2>>col2;

   // Check If Multiplication is Possible
   if(col1 != row2){
    cout<<"Matrix multiplication not possible. Columns of A must equal to rows of B.\n ";
   }

   //DECLARE
   int A[100][100] , B[100][100] , C[100][100];

   //Input 
   cout<<"\nEnter Elements Of Matrix A: \n";
   for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>A[i][j];
    }
   }

    cout<<"\nEnter Elements Of Matrix B: \n";
   for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
        cin>>B[i][j];
    }
   }
 // Initialize product matrix to 0
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication Logic
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            for(int k = 0; k < col1; k++) {
                //C[i][j] = A[i][0]×B[0][j] + A[i][1]×B[1][j] + ... + A[i][n-1]×B[n-1][j]
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //  Print Result Matrix
    cout << "\nMatrix A x B (Multiplication):\n";
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
/*
Enter Rows and Columns Of Matrix A: 2 3
Enter Rows and Columns Of Matrix B: 3 2

Enter Elements Of Matrix A:
1 2 3
4 5 6

Enter Elements Of Matrix B:
7 8
9 10
11 12

Matrix A x B (Multiplication):
58 64
139 154

Press any key to continue . . .


*/