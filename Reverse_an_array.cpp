//SINGH KASHISH
//30-05-2025 11:41

#include<iostream>
using namespace std;
int  main(){
   int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int start = 0;
    int end=size-1;

    while(start<end){
        int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;

            start++;
            end--;

    }
      cout<<"\nReversed array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

/*

Original array: 
1 2 3 4 5 
Reversed array: 
5 4 3 2 1 

*/