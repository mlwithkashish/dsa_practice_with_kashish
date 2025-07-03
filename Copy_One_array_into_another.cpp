//SINGH KASHISH
//30-05-2025 11:52

#include<iostream>
using namespace std;
int main(){
int arr1[] = {1, 2, 3, 4, 5};    // Original array
    int size = sizeof(arr1)/sizeof(arr1[0]);   // Array ka size nikalna

    int arr2[size];      // Second array jisme copy karna hai


    for(int i = 0; i < size; i++) {
        arr2[i] = arr1[i];   // Copy kar diya har element
    }

    // Print karke dekh lete hain
    cout << "Copied array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

//Copied array: 1 2 3 4 5 