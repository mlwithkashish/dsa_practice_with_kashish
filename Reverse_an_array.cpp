// REVERSE ARRAY – With and Without Extra Space
//SINGH KASHISH
//11-06-25 09:39
// Asked in: Amazon, Microsoft, Infosys, TCS
// Topic: 1D Arrays – Two Pointer Technique

#include<iostream>
#include<vector>
using namespace std;
/*
---------------------------------------------------------
 METHOD 1: Reverse Without Extra Space (In-place)
 Tum original array mein hi changes kar rahi ho, koi naya array ya vector nahi banaya.
---------------------------------------------------------
- TIME: O(n)
- SPACE: O(1)
- APPROACH: Use two-pointer method (swap start and end)
- INTERVIEW USE CASE: Memory-efficient solution
*/
void revArr01(vector<int>&arr){
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }
/*
----------------------------------------------------------
 METHOD 2: Reverse With Extra Space (New Array Created)
Tum ek naya array ya vector bana rahi ho original ko use karke.
----------------------------------------------------------
- TIME: O(n)
- SPACE: O(n)
- APPROACH: Create new vector and push elements in reverse order
- USE CASE: When original array must remain untouched
*/
vector<int> revArr02(vector<int>&arr1){
    vector<int> reversed;
    for(int i=arr1.size()-1;i>=0;i--){
        reversed.push_back(arr1[i]);
    }
    return reversed;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    revArr01(arr);
    cout<<"\nWithout Space: \n";
for(int num: arr){
        cout<<num<<" ";
    }

    vector<int> arr1={10,9,8,7,6};
    vector<int> result = revArr02(arr1);
    cout<<"\nWith Space: \n";
for(int num: result){
        cout<<num<<" ";
    }
    return 0;
}
/*
OUTPUT:

Without Space:
5 4 3 2 1
With Space:
6 7 8 9 10
*/


/*  
Interview Tip:
Jab bhi interviewer bole:
“Can you do this in-place?”
Uska matlab:
❌ No extra array
✅ Original input mein hi changes
.......................................... In-place	revArr01	Swap elements in same vector
............................................. With space	revArr02	Create new reversed vector
*/
