//SINGH KASHISH
//10-AUGUST-2025 08:13

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    stack<int> temp; // temporary stack for reversing

    //stack push elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<" ";
    cout<<endl;
    //we will use extra stack 
     // Print and transfer to temp
    while(st.size()>0){
        cout<<st.top()<<" "; // Print top
        temp.push(st.top()); // Store in temp
        st.pop(); // Remove from original
    }

    // putting elements back from temp to st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }

    cout << "Top after restoring: " << st.top() << endl; // Should be 50
    cout << "Stack size after restoring: " << st.size() << endl; // Should be 5



}
/*
50 
50 40 30 20 10 Top after restoring: 50
Stack size after restoring: 5
*/