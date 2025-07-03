//SOrt the Arrays Of 0's and 1's
//SINGH KASHISH
//08-06-2025 14:40 ASKED IN: Service-based companies: TCS, Infosys, Wipro
//PURPOSE: Sort a binary array (only 0s and 1s) using two methods
//COding Round yha pr 2 loop use hue hai q. change ho skta hai use only 1 loop go for 02 method
#include<iostream>
#include<vector>
using namespace std;

/*1st Method: Counting Zeros (Two-Pass)
  TIME: O(n) | SPACE: O(1)
  LOOPS: 2 loops
  METHOD: Count number of 0s → overwrite array accordingly
  Learning phase, warm-up problems
*/
void sort01(vector<int>& v) {
    int n = v.size();
    int noz = 0;  // Count of zeros

    // Count number of 0s
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) noz++;
    }

    //  Fill first 'noz' elements with 0, rest with 1
    for (int i = 0; i < n; i++) {
        if (i < noz) v[i] = 0;
        else v[i] = 1;
    }
}

/*2nd Method : Two-Pointer (single pass)
  TIME: O(n) | SPACE: O(1)
 LOOPS: 1 loop
 METHOD: Maintain two pointers — swap misplaced 1 and 0
More optimal for coding rounds
GOOD FOR: Interviews, optimization tasks

 */
void sort02(vector<int>& v){
   int n=v.size();
   int i=0;
   int j=n-1;
   while(i<j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    if(i>j) break;
    if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
   }
}

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    //  Print original array
    cout<< "Original Array:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout<< endl;

    //  Sort function call
    sort01(v);

    //  Print sorted array
    cout<< "Sorted Array with 2 loops:\n";
    for (int i = 0; i < v.size(); i++) {
        cout<< v[i] << " ";
    }

 
    sort02(v);

    //  Print sorted array
    cout<< "\nSorted Array 1 loop 2 pointer:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}

/*
OUTPUT:
Original Array:
0 0 1 0 0 1 1 0 1
Sorted Array with 2 loops:
0 0 0 0 0 1 1 1 1
Sorted Array 1 loop 2 pointer:
0 0 0 0 0 1 1 1 1
*/


