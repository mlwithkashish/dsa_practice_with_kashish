#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st; //Original stack
    stack<int> rt; //first temp stack
    stack<int> gt; //second temp stack

    //Push elements into original stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Orginal Stack (top to bottom): ";
    stack<int> tempShow = st;
    while (!tempShow.empty()>0) {
        cout << tempShow.top() << " ";
        tempShow.pop();
    }
    cout << endl;

    //Step 01 : move st -> rt
    while(!st.empty()>0){
        rt.push(st.top());
        st.pop();
    } 
    
    //Step 02: Move rt -> gt
    while(rt.size()>0){
        gt.push(rt.top());
        rt.pop();
    }
    
    //Step 03: move gt -> st (final reversed order)
    while(!gt.empty()>0){
        st.push(gt.top());
        gt.pop();
    }

    //ShOW REVERSED STACK
    cout<<"Reversed Stack(top to bottom): ";
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();

    }
    cout<<endl;

}
/*
Orginal Stack (top to bottom): 50 40 30 20 10 
Reversed Stack(top to bottom): 10 20 30 40 50 

*/
