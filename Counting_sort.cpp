// SINGH KASHISH
// 15-06-25 08:43 
// TOPIC: Counting Sort using Simple Arrays (No STL)
// Suitable for Non-negative Integers Only.....
#include<iostream>
using namespace std;
void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void countingSort(int arr[] , int n){
    //Find The Maximum  Element
    int maxVal=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxVal)
        maxVal = arr[i]; 
    }

    // Create a count ARRAY OF SIZE MAXvAL+1
    int count[1000] ={0}; //.......assume max value < 999

    // Store The Frequency of each element

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //Reconsturct The Sorted array
    int index=0;
    for(int i=0;i<=maxVal;i++){
        while(count[i] > 0){
            arr[index++] = i;
            count[i]--;
        }
    }

    cout<<"Sorted Array:  ";
    printArray(arr,n);
}
int main(){
     int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    countingSort(arr, n);

    return 0;
}
/*
Original Array: 4228331
Sorted Array:  1223348
*/

/*
---------------------------------------------------
 TIME & SPACE COMPLEXITY:
---------------------------------------------------
Time Complexity:
– Best Case:    O(n + k)
– Worst Case:   O(n + k)
    (n = size of input, k = max element in array)

Space Complexity:
– O(k), for the count array

 Counting Sort is:
– Non-comparison based algorithm
– Very fast for small range integers
– Not suitable for negative numbers (without modification)
---------------------------------------------------
*/
/*

 Interview/Viva Questions (for Google, Microsoft, etc.)
Q: What is the key idea behind Counting Sort?
A: It counts the frequency of elements and reconstructs the array based on that count — not based on comparisons.

Q: Is Counting Sort stable?
A: Basic version is not stable. A stable version maintains relative order using prefix sums.

Q: When should you use Counting Sort?
A: When input values are small non-negative integers (like marks, ages, etc.) and range is not too large.

Q: Can Counting Sort work for characters?
A: Yes, just use ASCII values as array indices.

Q: What are the limitations of Counting Sort?
A: It doesn't work for:

Large range of numbers (space waste)

Negative numbers (without modifications)

Floating-point numbers

Q: Can Counting Sort be used as a subroutine?
A: Yes, in Radix Sort and Bucket Sort.


*/