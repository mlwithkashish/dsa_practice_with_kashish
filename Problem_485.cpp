/* Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.

*/
//Singh KASHISH
//11-06-25 21:01
//SCREENING ROUND PROBLEM ; Amazon (L1/L2 roles) ; Cognizant, Accenture ; Product companies in initial rounds
#include<iostream>
using namespace std;
int find_max(int nums[] , int n){
    int curr_count=0;
    int max_count=0;

    for(int i=0;i<n;i++){
        if(nums[i]==1){
            curr_count++;
            max_count=max(max_count,curr_count);
        }
        else{
            curr_count=0;
        }
    }
    return max_count;
}
int main(){
    int nums[]={1,0,1,1,0,1};
    int n=sizeof(nums)/sizeof(int);
    int result= find_max(nums,n);
    cout<<"Maximum no. Of Consecutive 1s : "<< result<<endl;
    //Maximum no. Of Consecutive 1s : 2 
    return 0;
}