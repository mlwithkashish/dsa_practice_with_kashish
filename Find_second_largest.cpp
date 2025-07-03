//SINGH KASHISH
//30-05-2025 12:30

#include<iostream>
using namespace std;
int main(){
  
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     int largest = arr[0];
    int secondLargest = -1; // assuming all elements are positive, we'll fix this below

    // Step 1: Find largest
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Step 2: Find second largest (less than largest)
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] != largest) {
            if(!found || arr[i] > secondLargest) {
                secondLargest = arr[i];
                found = true;
            }
        }
    }

    if(found) {
        cout << "Second largest element is: " << secondLargest << endl;
    } else {
        cout << "No second largest element (all elements are same)." << endl;
    }

    return 0;
}

/* 
Enter number of elements: 5      
Enter 5 elements: 10 20 30 40 50
Second largest element is: 40

*/