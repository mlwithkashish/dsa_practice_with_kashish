//SINGH KASHISH
// 21-06-25 17:32
// TOPIC: LeetCode 33 - Search in Rotated Sorted Array
// Very Imp Interview Problem
// Asked In: GOOGLE, AMAZON, MICROSOFT, ADOBE, FLIPKART

/*
------------------------------------------------------------
 Problem Statement:
Given an integer array `nums` sorted in ascending order, and then rotated at an unknown pivot,
search for a given target value. If found, return its index; otherwise, return -1.

Example:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Note: No duplicate elements in the array.
------------------------------------------------------------
 Approach: Binary Search (Modified for Rotation)
– Find mid and check:
   • If left half is sorted, and target lies in it → move left
   • Else → move right
   • If right half is sorted, and target lies in it → move right
   • Else → move left
------------------------------------------------------------
 Time Complexity: O(log n)
 Space Complexity: O(1)
------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int search(vector<int>& nums, int target){
        int low=0 , hi = nums.size()-1;

        while(low<=hi){
            int mid = low + (hi-low) /2;
            if(nums[mid] == target)
            return mid;

            //Left Half Is Sorted   
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target < nums[mid])
                hi = mid-1;
            else
                low = mid + 1;
            }
            
            //RIGHT HAlf Is SOrted
            else{
                if(nums[mid] < target && target <= nums[hi] )
                 low=mid+1;
                else
                  hi = mid -1; 
            }
        }
        return -1;
}
};

int main(){
    Solution obj;
    vector<int> nums={4,5,6,7,0,1,2};
    int target = 0;

    int index = obj.search(nums, target);

    cout<<"\n Taget FOund At Index: ";
    if(index!= -1)
        cout<< index << " (Value: " << nums[index] << ")\n";
    else
         cout<<"Element Not FOund.\n";

 return 0;
}//Taget FOund At Index: 4 (Value: 0)

/*
/*
------------------------------------------------------------
Interview Tips:
– Explain why binary search still works: one half is sorted after rotation.
– Focus on deciding which half to discard at each step.

 Follow-up/Variations:
 Handle duplicates → LeetCode 81
 Return index of minimum element
 Apply binary search logic to rotated arrays with rotation point search

------------------------------------------------------------
 DRY RUN Example:

nums = [4,5,6,7,0,1,2], target = 0

1st Iteration:
low = 0, high = 6, mid = 3 → nums[3] = 7
Left sorted (4 to 7), target not in it → move right → low = 4

2nd Iteration:
low = 4, high = 6, mid = 5 → nums[5] = 1
Right sorted (1 to 2), target < 1 → move left → high = 4

3rd Iteration:
low = 4, high = 4, mid = 4 → nums[4] = 0 → FOUND ✅

------------------------------------------------------------
*/