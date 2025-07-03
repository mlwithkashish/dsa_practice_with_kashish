// SINGH KASHISH
// 18-06-25
// TOPIC: Linear Search
// Very Important for Viva, Interviews, and End-Sem

#include<iostream>
using namespace std;
//Time Complexity: O(n)
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;  // Element found
    }
    return -1;  // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
/*
Enter the element to search: 30
Element found at index: 2
*/