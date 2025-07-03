// MERGE TWO SORTED ARRAYS USING 3 POINTERS
// SINGH KASHISH
// 09-06-2025 19:43
// Asked in: Amazon, Google, Microsoft, Adobe, Walmart, Infosys, TCS, Wipro

//Hint: # 3-Pointers: 3 variables: i( arr 1 )----j(arr 2)-----k(arr total{1+2})
#include<iostream>
#include<vector>
using namespace std;
/*
--------------------------------------------
🔹 METHOD: 3-Pointer Technique (i, j, k)
--------------------------------------------
- TIME: O(n + m)
- SPACE: O(n + m)
- DIFFICULTY: Medium
- CATEGORY: Arrays, Two Pointers
- USE CASE: Asked in FAANG, Service-based company interviews
*/

  vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int>v3(m+n);
    int i=0; // v1 pointer
    int j=0; // v2 pointer
    int k=0; // v3 pointer

    // MERGE UNTIL ONE ARRAY IS EXHAUSTED
    while(i<n &&j<m){
        if(v1[i]<v2[j]){
            v3[k] = v1[i];
            i++;
           
        }
        else{ //v2[j]<v1[i]
            v3[k]=v2[j];
            j++;
        }
        k++;
    }

    //for remaining elements
    if(i==n){ //v1 ke sare elements ko to arrange kr diya
       while(j<=m-1){
        v3[k] = v2[j];
        k++;
        j++;
       }
    }
    //for remaining elements
    if(j==m){ //v2 ke sare elements ko to arrange kr diya
       while(i<=n-1){
        v3[k] = v1[i];
        k++;
        i++;
       }
    }
    //vector type hai to return to krna pdega 
    return v3;

  }

int main(){
   vector<int> v1,v2;
   v1={1,4,5,8};

   cout<<"\n  Original Array No.1: \n ";
   for(int i=0;i<v1.size();i++){
     cout<<v1[i]<<" ";
   }

   v2={2,3,6,7,10,12};
   
   cout<<"\n  Original Array No.2: \n ";
   for(int j=0;j<v2.size();j++){
     cout<<v2[j]<<" ";
   }

   vector<int> v = merge(v1,v2);
   
   cout<<"\n  Merged Array : \n ";
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }


}
/* 
output:

  Original Array No.1:
 1 4 5 8
  Original Array No.2:
 2 3 6 7 10 12
  Merged Array :
 1 2 3 4 5 6 7 8 10 12
 ---------------*/

 /* EXTRA GYAAN:

 1)DSA Category: Arrays, Two Pointers, Sorting
 2) INTERVIEWER KO IMPRESS KRNE KE LIYA
 Real-world Use Case:
   - Merge phase of Merge Sort algorithm
   - Merging sorted logs/files in distributed systems
   - K-way merge in external sorting (Big Data)
 
   3) STL USE KRKE TRY KRO 

   For extra learning or benchmarking, you can also show STL method:

    vector<int> stl_merge_result;
     merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(stl_merge_result));
     -You’ll need to:
        #include <algorithm>

   4) 4. Use auto or Range-Based For Loops (Cleaner Code)
      for (auto x : v) cout << x << " ";
  
    5)  Edge Case Handling
Show the interviewer that you think like a real-world problem solver:

// Handle empty input arrays
if (v1.empty()) return v2;
if (v2.empty()) return v1;
Put this at the start of the merge() function.
   

*/