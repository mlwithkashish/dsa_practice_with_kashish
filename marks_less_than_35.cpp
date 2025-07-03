//SINGH KASHISH
//29-05-2025 21:01 

#include<iostream>
using namespace std;
int main(){
    int n;
    // int size=10,b[size];   ...........VALID HAI IN ARRAY OF SAME DATATYPES
    /* Basically 
        int size;
        int b[size];.........YEH LIKHA HAI    
    */
    cout<<"\nEnter No. Of Students: ";
    cin>>n;
    int marks[n];
   cout<<"\nEnter Marks Of Students: ";
    for(int i=1;i<= n;i++){
        cout<<" ";
      cin>>marks[i];
    }

    cout<<"\nRoll No. Of Student GOt Less Than 35: ";
    for(int j=1;j<=n;j++){
        if (marks[j]<=35){
            cout<<j<<" ";
        }
    }
    return 0;
}

/* 

Enter Marks Of Students: 22
56
45
32
85
26

Roll No. Of Student GOt Less Than 35: 1 4 6

*/

// USER INPUT OF STUDENTS 


/* Enter No. Of Students: 6

Enter Marks Of Students:  12
 25
 32
 65
 14
 26

Roll No. Of Student GOt Less Than 35: 1 2 3 5 6 */

