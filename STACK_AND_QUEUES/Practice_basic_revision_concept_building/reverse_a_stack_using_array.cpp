// SINGH KASHISH
// 10-August-2025 08:42
#include <iostream>  // Input/Output ke liye
#include <stack>     // Stack STL ke liye
using namespace std;

int main() {
    stack<int> st; // Original stack

    // Elements ko stack me dalna (Push operations)
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Original stack ko print karna (copy leke taaki original destroy na ho)
    cout << "Original Stack (top to bottom): ";
    stack<int> tempShow = st; // stack ki copy
    while (tempShow.size() > 0) {
        cout << tempShow.top() << " "; // top element print
        tempShow.pop();                // top element remove
    }
    cout << endl;

    // STEP 01: Stack ke elements ko ek array me store karna
    int n = st.size();   // stack ka size
    int arr[n];          // array jisme elements store honge
    int i = 0;
    while (st.size() > 0) {
        arr[i++] = st.top(); // top element array me save
        st.pop();            // stack se remove
    }
    // Ab arr[0] me original stack ka top element hai (ulta order store hua hai)

    // STEP 02: Array ke elements ko wapas stack me push karna
    // Yahan hum j=0 se start kar rahe hain, isliye reverse order banega
    for (int j = 0; j < n; j++) {
        st.push(arr[j]); // array ka element stack me daalo
    }

    // Final reversed stack print karna
    cout << "Reversed Stack (top to bottom): ";
    while (st.size() > 0) {
        cout << st.top() << " "; // top print
        st.pop();                // remove
    }
    cout << endl;
}

/*
Output:
Original Stack (top to bottom): 50 40 30 20 10 
Reversed Stack (top to bottom): 10 20 30 40 50
*/
