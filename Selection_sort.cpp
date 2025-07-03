// SINGH KASHISH
// 14-06-25 19:26
// TOPIC: Sorting – Selection Sort
// Very Important for Placements, Viva, and End-Sem Exams
// Asked in: Amazon, Microsoft, TCS, Infosys, Wipro

#include<iostream>
#include<climits>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
     int minIndex = i;
for(int j = i+1; j < n; j++) {
    if(arr[j] < arr[minIndex]) {
        minIndex = j;
    }
}
swap(arr[i], arr[minIndex]);   // Place min at correct position
    }


    cout << "Sorted Array using Selection Sort: ";
    print(arr, n);
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    selectionSort(arr, 5);
    return 0;
}
//Sorted Array using Selection Sort: 11 12 22 25 64

/*
---------------------------------------------------------
 SELECTION SORT – Explanation:

➡ Selection Sort repeatedly finds the minimum element from
   the unsorted part and places it at the beginning.

How it works:
– Divide array into sorted and unsorted parts
– Select minimum from unsorted part
– Swap with beginning of unsorted part

 Example:
Original:   [64, 25, 12, 22, 11]
Pass 1:     [11, 25, 12, 22, 64]
Pass 2:     [11, 12, 25, 22, 64]
Pass 3:     [11, 12, 22, 25, 64]
Pass 4:     [11, 12, 22, 25, 64]

 Time Complexity:
– Best: O(n²)   (No optimization)
– Avg:  O(n²)
– Worst: O(n²)

 Space: O(1) (In-place)
✔ Stable: ❌ (can be made stable)
✔ Adaptive: ❌

✅ Uses:
– When memory is limited
– When number of swaps must be minimized

---------------------------------------------------------

 Why is Selection Sort not stable?
===>>>>Because it may swap non-adjacent elements, changing relative order of equal elements.

 How many swaps does Selection Sort do in the worst case?	
===>>>>Exactly (n - 1) swaps — much less than Bubble Sort.

 Why would you use Selection Sort over Bubble Sort?	
Selection Sort makes fewer swaps. Useful when swap cost is high.

 Can you implement Selection Sort without using extra space?	
Yes, it’s in-place, needs only O(1) extra space.

✨ Bonus Tip:
In Microsoft/Google, they rarely ask to implement Selection Sort directly — but they may ask:

Modify a known sorting algo like Selection or Bubble.

Or ask: What’s the best algo if only a few elements are unsorted? → (Here, Insertion Sort or optimized sort wins.)

*/

