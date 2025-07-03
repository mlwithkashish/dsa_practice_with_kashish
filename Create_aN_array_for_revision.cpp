//Memory is statically allocated (At Compile Time)
#include<iostream>
using namespace std;
int main(){
    int marks[50]; // 0 se 49 tk elements stored hai 
/* Unfortunately isme GARBAGE value store ho gyi hai*/
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // int marks[50]={1,2,3}; .........isme 0 to 2 hi initialised hai but bakki sari garbage nhi 0 se initialize ho jati hai

    //int marks[]={1,2,3}......isme apne aap hi index /or size set ho gya apne aapp hi

    int marks1[5]={1,2,3,4,5};
    cout<<sizeof(marks1)<<endl;//size nikalne ke liye
    cout<<sizeof(marks1) / sizeof(int)<<endl;//length of aray nikalne ke liye

    for(int i=0;i<5;i++){
      cout<<marks1[i]<<endl;
    }


    }
