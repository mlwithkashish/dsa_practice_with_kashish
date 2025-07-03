//LEETCODE-75: Sort Colors (Dutch National Flag Problem)
////SINGH KASHISH
//08-06-2025 14:40
// Asked in: Amazon, Google, Microsoft, Adobe, Walmart, Infosys, TCS, Wipro
#include<iostream>
#include<vector>
using namespace std;
/*
--------------------------------------------
 METHOD 1: Counting Method (Two-pass)
--------------------------------------------
- TIME: O(n)
- SPACE: O(1)
- DIFFICULTY: Easy
- USE CASE: Warm-up, TCS/NQT, Wipro, Infy coding rounds
- NOT IDEAL for high-level interviews due to 2 passes
*/
void sort01m1(vector<int>& v){
   int n=v.size();
   int noz = 0, noo = 0, noT = 0;

    // Count each color
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) noz++;
        else if (v[i] == 1) noo++;
        else noT++;
    }

    //Overview vector with sorted values

    int index = 0;

    for (int i = 0; i < noz; i++) v[index++] = 0;
    for (int i = 0; i < noo; i++) v[index++] = 1;
    for (int i = 0; i < noT; i++) v[index++] = 2;
}
    //Method jo leetcode mein dala
// for (int i = 0; i < n; i++) {
//     if (i < noz) v[i] = 0;
//     else if (i < noz + noo) v[i] = 1;
//     else v[i] = 2;
// }

/*
---------------------------------------------------
🔹 METHOD 2: Dutch National Flag Algorithm (1-pass)
---------------------------------------------------
- TIME: O(n)
- SPACE: O(1)
- DIFFICULTY: Medium
- USE CASE: Amazon, Google, Microsoft, Adobe
- IMPRESS interviewer with in-place one-pass logic
*/

void sortColors(vector<int>& nums) {

        //One pass solution ==>>> FOLLOW UP CASE 
      
      int lo=0;
      int mid=0;
      int hi=nums.size()-1;

      // 1) mid ke bare mein socho
      // 2) 0 to lo-1 -> 0 , hi+1 to end -> 2
      // 3) lo to mid-1 -> 1

      while(mid<=hi){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums [mid]= nums[hi];
            nums[hi]=temp;
            hi--;
        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums [mid]= nums[lo];
            nums[lo]=temp;
            lo++;
            mid++;
        }
        else mid++;
      }

    }


int main(){
    vector<int>v;
    v={1,0,2,1,2,0,1};
    cout<<"\nOriginal Vector: \n";
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    // Try Method 1 - COUNTING
    sort01m1(v);
   cout<<"\nSorting Vector Using Counting Method: \n";
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    sortColors(v);
   cout<<"\nSorting  Using Dutch Flag(1-pass): \n";
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    
}
/* 
OUTPUT:

Original Vector:
1 0 2 1 2 0 1
Sorting Vector Using Counting Method:
0 0 1 1 1 2 2
Sorting  Using Dutch Flag(1-pass):
0 0 1 1 1 2 2  
-----------------------------*/