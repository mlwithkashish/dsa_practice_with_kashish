//Singh Kashish
// 28-06-25 13:16
//The Staircase problem (like stair1way, stair2way) is a very popular DSA pattern and is frequently asked in interviews by Amazon, Microsoft, Google, etc.
#include<iostream>
using namespace std;
// 1 or 2 steps allowed
int stair1way(int n){
    if (n==0) return 1; // 1 way to stand still ...........Base case : one way to stay at 0
    if (n == 1) return 1; // 1 way to reach step 1 : (1)
    if (n == 2) return 2; // 2 ways: (1+1) , (2)
    return stair1way(n - 1) + stair1way(n-2);
}

//1, 2 , or 3  steps allowed
int stair2way(int n){
    if (n==0) return 1; // 1 way to stand still
    if (n == 1) return 1; // 1 way to reach step 1 : (1)
    if (n == 2) return 2; // 2 ways: (1+1) , (2)
    return stair2way(n - 1) + stair2way(n-2) + stair2way(n-3);
}

// PRint all staircase paths(1,2,3 steps)
void printPaths(int n , string path =""){
    if (n==0){
        cout<<path<<endl;
        return;
    }
    if (n>=1) printPaths(n-1, path + "1 ");
    if (n >=2) printPaths(n-2 , path + "2 ");
    if (n >=3) printPaths(n-3, path +"3 ");
}
int main(){
    int n;
    cout<<"Enter Number Of Stairs: ";
    cin>>n;
    cout<<endl;
    cout<<"Total Ways to climb " << n << " stairs ( 1 or 2 steps): "<<stair1way(n)<<endl;
   cout<<endl;
   cout << "Total ways to climb " << n << " stairs (steps: 1, 2, or 3): " << stair2way(n) << endl;
   cout<<"\n\n";
   cout<<"All possible paths:\n";
   printPaths(n);
}
/*
Enter Number Of Stairs: 5

Total Ways to climb 5 stairs ( 1 or 2 steps): 8

Total ways to climb 5 stairs (steps: 1, 2, or 3): 13


All possible paths:
1 1 1 1 1
1 1 1 2
1 1 2 1
1 1 3
1 2 1 1
1 2 2
1 3 1
2 1 1 1
2 1 2
2 2 1
2 3
3 1 1
3 2
Press any key to continue . . .

*/