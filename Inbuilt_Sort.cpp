// SINGH KASHISH
// DATE: 15-06-25 08:27
// TOPIC: Inbuilt Sort in C++
// Very Important for End-Sem Exams, Placements, Coding Interviews
// Asked in: Google, Microsoft, Amazon, Adobe, Infosys, TCS
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
/*
---------------------------------------------------------
 Inbuilt sort() Function (C++)
– Provided by the C++ STL in <algorithm> header
– Used to sort arrays, vectors, strings, etc.
– Default: Ascending order
– Can use custom comparator for descending or custom logic

 Syntax:
sort(start_address, end_address);
sort(start, end, comparator); // Optional for custom logic

Internally uses: Introsort
– Combines QuickSort, HeapSort, and InsertionSort

 Time Complexity:
– Best: O(n log n)
– Average: O(n log n)
– Worst: O(n log n)

 Space: O(log n) – not constant, due to recursion stack

 Stable:  Not stable by default
---------------------------------------------------------
*/
void arrayExample(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr) / sizeof(int);

    //  Sort in Ascending order
    sort(arr, arr + n);

    cout << "\nSorted Array (Ascending): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    //  Sort in Descending order using greater<int>()
    sort(arr, arr + n, greater<int>());

    cout << "\nSorted Array (Descending): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
void vectorExample() {
    vector<int> v = {7, 2, 4, 9};

    sort(v.begin(), v.end()); // Ascending

    cout << "\n\nSorted Vector (Ascending): ";
    for (auto x : v) cout << x << " ";

    sort(v.rbegin(), v.rend()); // Descending

    cout << "\nSorted Vector (Descending): ";
    for (auto x : v) cout << x << " ";
}

void stringExample() {
    string s = "KASHISH";

    sort(s.begin(), s.end()); // Lexicographic Sort (A-Z)

    cout << "\n\nSorted String: " << s;  // AHHIKSS
}

// 🔁 Custom Comparator Example: Sort in descending order
bool cmp(int a, int b) {
    return a > b; // If true, a comes before b
}

void comparatorExample() {
    int arr[] = {10, 20, 15, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, cmp); // Use custom comparator

    cout << "\n\nSorted using custom comparator: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
   int main() {
    arrayExample();
    vectorExample();
    stringExample();
    comparatorExample();

    return 0;
}
/* 

Sorted Array (Ascending): 1 2 3 4 5
Sorted Array (Descending): 5 4 3 2 1

Sorted Vector (Ascending): 2 4 7 9
Sorted Vector (Descending): 9 7 4 2

Sorted String: AHHIKSS

*/