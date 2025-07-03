//SINGH KASHISH
//14-06-25 11:36
// TOPIC: String Processing – Extract and Sort Capital Letters  
// Very Important for String Logic Building and Placements  
// Asked in: Amazon, Infosys, TCS, Wipro, Accenture

#include<iostream>
#include<string>
using namespace std;

// Bubble Sort Function For Strings
/*
---------------------------------------------------------
Function: bubbleSort
– Manually sorts a string using Bubble Sort logic
– Repeatedly compares adjacent characters and swaps them if not in order

Time Complexity: O(n^2)
Space Complexity: O(1)
Stable Sort: Yes (Order preserved for same characters)
---------------------------------------------------------
*/
void bubbleSort(string &s){
    int n=s.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
}
int main() {
    string s = "Kashish";
    string capital = "", small = "";
 /*
    ---------------------------------------------------------
    Logic:
    – Traverse the string
    – Separate capital and small letters using ASCII ranges:
        • 'A' to 'Z' → 65 to 90 (Capital Letters)
        • 'a' to 'z' → 97 to 122 (Small Letters)
    ---------------------------------------------------------
*/
    
// Extract capital and small letters
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            capital.push_back(s[i]);
        }
        else if(s[i] >= 'a' && s[i] <= 'z') {
            small.push_back(s[i]);
        }
    }

    // Apply bubble sort
    bubbleSort(capital);
    bubbleSort(small);

    // Output
    cout << "Sorted Capital Letters: " << capital << endl;
    cout << "Sorted Small Letters: " << small << endl;

    return 0;

}
/* OUTPUT:
Sorted Capital Letters: K
Sorted Small Letters: ahhiss

*/