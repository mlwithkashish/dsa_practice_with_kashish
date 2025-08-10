// Singh Kashish
// 10-08-2025 09:16
#include<iostream>
using namespace std;
#include<stack>// Stack STL use karne ke liye

// Function to copy stack elements into an array
int copyStackToArray(stack <int> &st , int arr[]){
    int i =0;
    stack<int>temp; //Temporary stack for holding elements

    // move st to temp (so we don't destroy original order in array)
    // Step 1: st se sab elements temp me le jao (ulta ho jayega)
    while(st.size()>0){
        temp.push(st.top()); // st ka top temp me push
        st.pop(); // st se remove
    }

    // move from temp back to st (original order wapas milega ) , but also into array array me store karo 
    while(temp.size()>0){
        int val = temp.top(); // temp ka top value nikalo
        temp.pop();  // temp se remove
        st.push(val); // restore original stack st me restore karo
        arr[i++] = val;   // store in array

    }

    return i ; // return number of elements Total elements ka count return karo

}

// Function to reverse stack using array
void reverseStackUsingArray(stack<int> &st){
    int n = st.size(); // total size nikal lo
    int arr[n]; // utne size ka array banalo

    //step 01: copy stack elements into array
    int size = copyStackToArray(st,arr);

    //step 02: push back from array in reverse order Array ke last element se shuru karke temp stack me push karo
    // Step 2: Array ke last element se shuru karke temp stack me push karo
    stack<int> temp; 
    for (int i = size - 1; i >= 0; i--) {
                            // reverse order me push 
        temp.push(arr[i]);
    }


    //step 03: Transfer from temp to st
     // Step 3: temp stack ko original stack me assign kar do
    st = temp;
}

//FUnction to print stack without destroying it(original destroy na ho isliye by value pass)
void printStack(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"\nOriginal Stack (top to bottom): ";
    printStack(st);
   // Reverse the stack 
   reverseStackUsingArray(st);

   cout<<"Reversed Stack (top to bottom): ";
   printStack(st);

}
/*

Original Stack (top to bottom): 50 40 30 20 10 
Reversed Stack (top to bottom): 10 20 30 40 50 

*/