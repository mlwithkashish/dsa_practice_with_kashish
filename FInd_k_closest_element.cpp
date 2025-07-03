//Leetcode 658
//SINGH KASHISH
// 21-06-25 17:50
// TOPIC: LeetCode 658 - Find K Closest Elements
// Very Imp Interview Problem
// Asked In: GOOGLE, AMAZON, MICROSOFT, ADOBE
/*
------------------------------------------------------------
 Problem Statement:
Given a **sorted array** `arr`, two integers `k` and `x`,
return the **k closest integers to x** in the array.
The result should also be sorted in ascending order.

Note:
If there is a tie, return the **smaller** element.

Example:
Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]

------------------------------------------------------------
 Approach: Binary Search on Window Start
– Goal: Find the **starting index** of the window of size `k`
   that gives the closest elements to x.
– We binary search between `low = 0` and `high = arr.size() - k`

 Logic:
• At each step, check:
   – if `x - arr[mid] > arr[mid + k] - x`, then move right
   – else, move left (current window is better)

------------------------------------------------------------
 Time Complexity: O(log(n - k) + k)
 Space Complexity: O(k) for result vector
------------------------------------------------------------
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> findClosest(vector<int>& arr , int k , int x){
        int low=0 , hi=arr.size()-k;
        while(low<hi){
            int mid = low + (hi-low) / 2;

            // Compare distance from x to arr[mid] vs arr[mid + k]
            if(x - arr[mid] > arr[mid + k] - x)
              low = mid+1;
            else
             hi=mid; //stay left
        }

        //Return Subarray starting from low index of size k
        return vector<int>(arr.begin() + low, arr.begin() + low + k);
    }
};
int main(){
    Solution obj;
    vector<int> arr={1,2,3,4,5};
    int k=4 , x=3;

    vector<int> result=obj.findClosest(arr,k,x);
    cout<<"\n K Closest Elements TO " << x <<": ";
    for(int num : result)
      cout<<num<<" ";
    cout<<endl;


    return 0;
}
/*
 K Closest Elements TO 3: 1 2 3 4
 */
/*
------------------------------------------------------------
 Interview Tips:
– You MUST explain that:
   • Even though it’s a search for closest, binary search works
   • It’s applied to **window positions**, not individual values

 Follow-up Questions:
 What if the array is not sorted? → Use max-heap or quickselect
 What if ties need to include all closest, not just k? → Modify approach
 Can you do this using 2 pointers? (Yes, but slower in edge cases)

------------------------------------------------------------
 DRY RUN:

arr = [1, 2, 3, 4, 5], k = 4, x = 3
low = 0, high = 1 (since 5 - 4 = 1)

mid = 0 → arr[mid] = 1, arr[mid+k] = 5
x - 1 = 2, 5 - x = 2 → equal → move left → high = mid = 0

Final low = 0 → take subarray [0,1,2,3] → [1,2,3,4]

------------------------------------------------------------
*/
/*
3 approach hai solve krne ki
Approach	      Time Complexity	                  Notes
Brute Force	         O(n log n)	                  Sort by distance, works but slow for large n
Two Pointers	     O(n)	                  OK, but not optimal
Binary Search      	 O(log(n - k)) + O(k)	Best for sorted arrays, fastest, cleanest

*/

