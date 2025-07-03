// SINGH KASHISH
// 14-06-25  20:01
// TOPIC: Insertion Sort
// Very Important for Viva, End Semester, and Interviews
// Asked in: Amazon, Microsoft, TCS, Wipro, Infosys

#include<iostream>
using namespace std;

/*
-------------------------------------------------------
Insertion Sort:
– Start from second element
– Compare it with left-side sorted array
– Shift elements to the right and insert at correct position

Time:
– Best: O(n) [already sorted]
– Worst: O(n^2)
Space: O(1), In-place
Stable: Yes
Adaptive:  Yes (works faster if partially sorted)
-------------------------------------------------------
*/

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;

        // Shift elements to the right until correct spot found
        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "Sorted Array using Insertion Sort: ";
    print(arr, n);
}

int main(){
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}
/*
Sorted Array using Insertion Sort: 1 3 4 5 9

 Working:
Start from index 1 (second element).

Compare it with elements before it.

Insert it at the right position by shifting elements if needed.

*/