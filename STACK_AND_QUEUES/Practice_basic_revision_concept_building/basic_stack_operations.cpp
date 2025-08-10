//SINGH KASHISH
//10-August-2025 07:44am
#include<iostream>
#include<stack> //......Include Stack Library
using namespace std;

int main(){

   stack<int> st; //.....Declare a stack of integers

   //Push_Operations: Add Elements To Stack
   st.push(10); //stack: [10]
   st.push(20); //stack: [10,20]
   st.push(30); //stack: [10,20,30]

   //Peek Operations : View the top element
     cout<<"Top Element: "<< st.top() << endl; //....O/P: 30
    
    //POP Operation : Remove the top element
    st.pop(); //Removes 30 -> stack: [10,20]
    cout<<"After pop, top: " << st.top() << endl; //....O/p: 20

    //SIZE operations : Get no. of elements
    cout<<"Stack size: "<<st.size()<<endl; //O/P : 2

    //ISEMPTY operation: CHeck if stack is empty
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl; //..o/p: not empty
    
    }

}

/*
Top Element: 30
After pop, top: 20
Stack size: 2
Stack is not empty

*/