#include<iostream>
using namespace std;
int powerLog(int base, int expo)
{
    if (expo == 0) return 1; // Base case: anything^0 = 1

    int ans = powerLog( base , expo / 2 ); // Recursive call

    if( expo % 2 == 0)
      return ans*ans; // Even Component
    else
      return base * ans * ans; //Odd exponent
}
int main(){
  // code......
  int a , b;
  cout<<"\nEnter Base : ";
  cin>>a;
  cout<<"\nEnter Exponent : ";
  cin>>b;
  cout << a << "^" << b << " = " << powerLog(a, b) << endl;
}
/*

Enter Base : 2

Enter Exponent : 3
2^3 = 8
Press any key to continue . . .

*/