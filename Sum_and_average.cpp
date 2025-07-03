//SINGH KASHISH
//29-05-2025 21:38

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

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<<"\nSum OF Array ELements are: "<<sum<<endl;
     
    float avg= static_cast<float>(sum)/n;

    cout<<"\nAverage OF Array ELements are: "<<avg<<endl;

 return 0;

}
/* 

Enter No. Of Element: 5

Enter 5 Element: 15 12 20 30 40

Sum OF Array ELements are: 117

Average OF Array ELements are: 23.4 */

/* In C++, static_cast<float>(sum) converts the type of sum from int to float. 

This is called a type cast, and it’s used to prevent integer division and ensure floating-point division. */