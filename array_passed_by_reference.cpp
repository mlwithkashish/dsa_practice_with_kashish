//Arrays arre always passed by reference not by value
#include<iostream>
using namespace std;

void fun(int arr[]){
  arr[0]=1000;
}
void fun2(int *ptr){
    ptr[0]= 2000;
}
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl; //0x16......(basically adress print hoga)

    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;//0x16....(basically 0th position ki address print krega)
    cout<<*arr<<endl;//1 //arr[0]=*arr....
    cout<<*(arr+1)<<endl;//2 
    cout<<*(arr+2)<<endl;//3 

    fun(arr);//passing array name is equivalent to passing the pointer pointing to 1st location
    cout<<arr[0]<<endl;//1000

     fun2(arr);//array ka name can be converted into ------->>>> pointer
    cout<<arr[0]<<endl;//2000

    /*
    SYNTAX:

    1) void printArr(int arr[]){.......}

    2) void printArr(int *arr){.......}
    
    1)======2) dono ka matlab same hai
    
    */

}