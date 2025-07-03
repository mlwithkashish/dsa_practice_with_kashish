//SINGH KASHISH
//30-06-25 09:10
#include<iostream>
using namespace std;
void printNtimes(int i , int n){
    if (i>n) return;
    cout<<"\nKASHISH";
    printNtimes(i+1,n);
}
void print1toN(int i , int n){
    if(i>n) return;
    cout<<i<<" ";
    print1toN(i+1,n);
}
void Nto1( int i){
    if (i<1) return;
    cout<<i<<" ";
    Nto1(i-1);
}
int main(){
    //.......code......
   int n;
   cout<<"\nEnter the NO. OF Times The name should print: ";
   cin>>n;
   cout<<"List: "<<endl;
   printNtimes(1,n);
    cout<<"\n\n";
    print1toN(1,n);
    cout<<"\n\n";
    Nto1(n);
}
/*
Enter the NO. OF Times The name should print: 5
List:

KASHISH
KASHISH
KASHISH
KASHISH
KASHISH

*/