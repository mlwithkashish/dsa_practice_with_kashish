//SINGH KASHISH
//29-05-2025 21:19

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"\nEnter No. Of Element: ";
cin >>n;
int arr[n];
cout<<"\nEnter "<<n<<" Element: ";
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
int max=arr[0];
int min=arr[0];

for ( int i=1;i<=n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}

cout<<"MAXIMUM ELEMENT: "<<max<<endl;
cout<<"MINIMUM ELEMENT: "<<min<<endl;

}