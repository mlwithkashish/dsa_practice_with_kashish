//SINGH KASHISH
//30-05-2025 12:09 


/* Agar array ulta karne ke baad bhi same rahe, to wo palindrome hai.

Example:
Input: [1, 2, 3, 2, 1] → Palindrome ✅

Input: [1, 2, 3, 4] → Not a palindrome ❌

*/
#include<iostream>
using namespace std;
int main(){

    int n;
cout<<"\nEnter No. Of Element: ";
cin >>n;
int arr[n];
cout<<"\nEnter "<<n<<" Element: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int start=0;
int end=n-1;

bool isPalindrome=true;

while(start<end){
    if (arr[start]!=arr[end]){
        isPalindrome=false;
        break;
    }

    start++;
    end--;

}

if(isPalindrome){
    cout<<"Array is a palindrome"<<endl;
}
else{
    cout<<"Array is not a palindrome"<<endl;
}

return 0;

}

/* 

Enter No. Of Element: 5

Enter 5 Element: 1 2 3 2 1
Array is a palindrome


Enter No. Of Element: 5

Enter 5 Element: 1 2 3 4 5 
Array is not a palindrome

*/