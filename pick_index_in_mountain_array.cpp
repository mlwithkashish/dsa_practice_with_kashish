//SINGH KASHISH
// 21-06-25 17:06
//TOPIC: Peak Index In Mountain Array Using BInary Search
//Very Imp Interview Problem
//Asked In: GOOGLE;AMAZON;MICROSOFT;ADOBE;FLIPKART
//leetcode:852

/*
------------------------------------------------------------
 Problem Statement:
– Given a mountain array (strictly increasing then strictly decreasing), 
  find the index of the peak element.

 Mountain Array Definition:
– arr[0] < arr[1] < ... < arr[i] > arr[i+1] > ... > arr[n-1]

------------------------------------------------------------
 Approach: Binary Search
– Check mid and mid+1:
   • If arr[mid] < arr[mid+1] → move right
   • Else → move left (including mid)

------------------------------------------------------------
 Time Complexity: O(log n)
 Space Complexity: O(1)
------------------------------------------------------------
*/

#include<iostream>
using namespace std;

//FUnction TO FInd Peak Index
int peakIndex(int arr[],int n){
    int low=0 , hi=n-1;
    while(low<hi){
        int mid = low +(hi-low)/2;

        //If Mid Element is less than next -> GO RIGHT (Peak Aage Jayega)
        if(arr[mid] < arr[mid+1]){
            low=mid+1;
        }
        //If Mid Element is greater than next -> GO LEFT (Peak Bich mein aajayega ya to piche aajayega )
        else{
            hi=mid;
        }
    }

    //FInal low or hi at peak
    return low;
}

int main(){
    int arr[]={1,3,5,7,6,4,2};
    int n=sizeof(arr) / sizeof(arr[0]);
    int peak = peakIndex(arr,n);

    cout<<"\n Peak Index : "<< peak << "(Value: " <<arr[peak] << ")\n";

    return 0;
}
// Peak Index : 3 (Value: 7)

/*------------------------------------------------------------
 Tip for Interviews:
– Always explain why binary search works (array has a peak and is unimodal)
– You can be asked to modify the problem to:
   → Return the peak value instead of index
   → Handle multiple peaks
   → Apply to mountain array variations
------------------------------------------------------------
*/

// yeh bhi approach ho skti hai
/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // 1 3 5 4 3 2 1 0
        int n=arr.size();
        int idx = -1;
        for(int i=1;i<=n-2;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                idx=i;
                break;
            }

        }
        return idx;
    }
};*/

//DRY RUN 
/*
arr = [1, 3, 5, 7, 6, 2]

Initial: low = 0, high = 5

1st Iteration:
mid = 2 → arr[2] = 5, arr[3] = 7
5 < 7 → move right → low = 3

2nd Iteration:
mid = 4 → arr[4] = 6, arr[5] = 2
6 > 2 → move left → high = 4

3rd Iteration:
mid = 3 → arr[3] = 7, arr[4] = 6
7 > 6 → move left → high = 3

Now low = high = 3 → Peak Found ✅
*/