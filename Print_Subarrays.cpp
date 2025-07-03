// Subarray Printer – Very Important for Placements & DSA Foundations
//  Singh Kashish
// Topic: 1D Arrays – Subarrays (Start-End Technique)
// Date: 11-06-2025 10:26
// Asked in: Amazon, Microsoft, Google, Adobe, TCS

#include<iostream>
using namespace std;
/*
------------------------------------------------------------
FUNCTION: printSubarrays
Description:
    Prints all possible subarrays of a given array.
    A subarray is a contiguous part of the array.

Parameters:
    arr - pointer to the input array
    n   - size of the array

Time Complexity:
    O(n^3)
    Outer loop runs n times,
    Middle loop runs (n - start) times,
    Inner loop prints each subarray (length from start to end)

Space Complexity:
    O(1) – no extra space used
------------------------------------------------------------
*/
void printSubarrays(int *arr , int n){
    for(int start=0;start<n;start++){
        for(int end=start; end<n ; end++){
            //cout<<"("<<start<< "," << end <<") ";
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printSubarrays(arr, n);
    return 0;
}