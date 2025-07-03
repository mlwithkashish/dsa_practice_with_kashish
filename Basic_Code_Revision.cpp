// SINGH KASHISH
// 17-06-25
// Topic: 1D Vectors in C++ – Syntax, Functions, Loops, Initialization, and Interview Notes

#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> v){
    //Range based for loop 
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
}

//Modify Vector using pass by reference
void ModifyVector(vector<int> &v){
    v.push_back(100);
}

int main(){
    //Vector Initialization List
    vector<int> v1;//........EMPTY VECTOR
    vector<int> v2(5);//.....5 element, all 0
    vector<int> v3(5, 10);//........ 5 elements, all 10
    vector<int> v4 = {1, 2, 3, 4};//..........initializer list
    vector<int> v5(v4);//...............copy of v4

    //Basic  Vector Operation

    vector<int> v;
    v.push_back(10); // Add element at end
    v.push_back(20);
    v.push_back(30);

    v.pop_back();     // Remove last element

    cout << "Size: " << v.size() << endl;       // Number of elements
    cout << "Empty?: " << (v.empty() ? "Yes" : "No") << endl; // Is vector empty?

    // ✅ Accessing Elements
    cout << "v[0] = " << v[0] << " (fast, no bounds checking)" << endl;
    cout << "v.at(0) = " << v.at(0) << " (safe, bounds checked)" << endl;

    // ✅ Front & Back
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;

    // ✅ Traversal using Range-based For Loop
    cout << "Vector Elements: ";
    printVector(v);

    // ✅ Clear all elements
    v.clear();  // removes all elements; capacity may stay the same
    cout << "Size after clear: " << v.size() << endl;

    // ✅ Passing vector to functions
    vector<int> nums = {1, 2, 3};
    ModifyVector(nums);   // modifies original vector (pass-by-reference)
    cout << "Modified Vector: ";
    printVector(nums);    // Output: 1 2 3 100

    return 0;

}
/*
Size: 2
Empty?: No
v[0] = 10 (fast, no bounds checking)
v.at(0) = 10 (safe, bounds checked)
Front: 10, Back: 20
Vector Elements: 10 20
Size after clear: 0
Modified Vector: 1 2 3 100
Press any key to continue . . .

*/