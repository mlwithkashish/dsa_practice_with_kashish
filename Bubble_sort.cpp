//SINGH KASHISH
//14-06-25 10:27
//TOPIC: Sorting-Bubble Sort
// Very Important for Placements, Viva, and Coding Interviews
// Asked in: Amazon, Google, Microsoft, Adobe, TCS, Infosys

#include<iostream>
using namespace std;

/*
---------------------------------------------------------
Bubble Sort (Basic):
– Repeatedly compares adjacent elements and swaps them if needed.
– Large elements bubble to the end in each pass.

Time Complexity:
– Worst & Average: O(n^2)
– Best: O(n) [with optimization]
Space Complexity: O(1) – In-place sort
Stable: Yes
---------------------------------------------------------
*/

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
---------------------------------------------------------
Unoptimized Bubble Sort
– Uses two nested loops
– Swaps adjacent elements if in wrong order
– Runs all passes, even if already sorted

Time Complexity: O(n^2)
---------------------------------------------------------
*/

void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){ // DESCENDING KE LIYE: arr[j] < arr[j+1]..................
                swap(arr[j],arr[j+1]);
            }
        }
    }
  cout << "Sorted (Unoptimized Bubble Sort): ";
    print(arr,n);
}
/*
---------------------------------------------------------
Optimized Bubble Sort
– Adds a flag `swapped` to check if any swaps occurred
– If no swaps in a pass → array is already sorted → break early

Time Complexity:
– Best Case: O(n) if already sorted
– Worst Case: O(n^2)
---------------------------------------------------------
*/
void OptimizedBubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
        break;
    }

    }
    cout << "Sorted (Optimized Bubble Sort): ";
    print(arr,n);
}

int main() {
    int arr1[5] = {5, 4, 3, 2, 1};
    int arr2[5] = {10, 4, 3, 2, 1};  // Copy for second sort

    bubbleSort(arr1, 5);
    cout << "\n";
    OptimizedBubbleSort(arr2, 5);

    return 0;
}
/*


OUTPUT:
Sorted (Unoptimized Bubble Sort): 1 2 3 4 5
Sorted (Optimized Bubble Sort): 1 2 3 4 10

*/
/*
INTERVIEWERS QUESTION:
1)Is Bubble Sort a stable sorting algorithm?
 Yes. It does not change the relative order of equal elements.

2)What is the time complexity of Bubble Sort?
~Worst & Average Case: O(n²)
~Best Case (optimized): O(n)

3)How can you optimize Bubble Sort?
By using a swapped flag to stop if array is already sorted.

4)What happens if the array is already sorted?
Unoptimized: Still takes O(n²)
Optimized: Stops after one pass → O(n)

5)Compare Bubble Sort with Selection Sort. Which is better and why?
Both are O(n²), but:
Bubble Sort is stable, Selection Sort is not.
Selection Sort does fewer swaps, so sometimes faster.

6)Is there any sorting algorithm better than Bubble Sort?
 Yes! In real-world use cases:
Merge Sort, Quick Sort, Heap Sort, Tim Sort, etc.

7)Can you sort strings using Bubble Sort logic?
 Yes! Just compare strings using > operator or compare().

*/

/*
If the interviewer asks:

“Can you sort the array without using a sorting algorithm?”

Say:

“Yes, I can implement my own logic like bubble sort, selection sort, or even use priority queues depending on time-space tradeoff.”


*/