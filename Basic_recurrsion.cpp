#include <iostream>
using namespace std;

// BASIC FUNCTION
void sayHello()
{
    cout << "\nHello,Kashish!!" << endl;
}

// Function With Parameters
void greet(string name)
{
    cout << "\nHello, " << name << "!!" << endl;
}

// Function with return value
int add(int a, int b)
{
    return a + b;
}

// Basic Recursion example
void printNumbers(int n)
{
    if (n > 5)
        return; // Base case : jab n>5 ho , ruk jao

    cout << n << " ";
    printNumbers(n + 1); // Recursion: next number ke liye khud ko hi call krega
}

// Factorial Using Recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1; // Base Case: jaise factorial of 0 and 1 kya hoga = 1!!

    return n * factorial(n - 1); // Recursive call: n*(n-1)!!
}

// Sum Of Digits of  a number
int digitSum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + digitSum(n / 10); // -> 3 + 2 + 1 = 6
}

// Sum Of First n Numbers
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1); //...5+4+3+2+1+0==15
}

// PRINT 1 to N (Two Parameters)
void print1toN(int i, int n)
{
    if (i > n)
        return;
    cout << " " << i << " ";
    print1toN(i + 1, n);
}

// PRINT 1 to N (One Parameters)
void print1toNN(int n)
{
    if (n == 0)
        return;
    print1toNN(n - 1);
    cout << n << " ";
}

// Power(a^b)
int power(int base, int expo)
{
    if (expo == 0)  return 1;
    if (expo == 1)  return base;
    return base * power(base, expo - 1);
}

// Reverse A string
void reverseString(string str, int index)
{
    if (index < 0)
        return;
    cout << str[index];
    reverseString(str, index - 1);
}

// Multiply Two numbers without using *
int multiply(int a, int b)
{
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1); // a * b = a + a +......(b times)
}

// Print Pattern using recurssion
void pattern(int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    pattern(n - 1);
}

int main()
{
    sayHello();
    greet("Kashish"); // Function Call with actual arguments ......jo wha gya woh formal argument hai
    int result = add(5, 7);

    cout << "\nSum: " << result << endl;

    printNumbers(1);
    cout << "\n";

    int num = 5;
    cout << "\nFactorial of " << num << " is " << factorial(num) << endl;

    cout << "\n";

    cout << "Sum Of 5 is: " << sum(5) << endl;

    cout << "\n";

    print1toN(1, 10);

    cout << "\n\n";
    print1toNN(20);

    cout << "\n";

    cout << " Digit Sum: " << digitSum(123) << endl;
    cout << "\n";

    cout << " Power  2 ^ 3 : " << power(2, 3) << endl;
    cout << " \n\n ";

    string name = " Kashish ";
    cout << " Reverse of Kashish: ";

    reverseString(name, name.length() - 1); //
    cout << "\n\n";

    cout << "Multiplication of 3*4 ==  " << multiply(3, 4);
    cout << "\n\n";

    cout << "Pattern of 5 * 5 stars \n";
    pattern(5);
    cout << endl;
}

/*

Hello, Kashish!!

Sum: 12
1 2 3 4 5

Factorial of 5 is 120

Sum Of 5 is: 15

 1  2  3  4  5  6  7  8  9  10

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
 Digit Sum: 6

 Power  2 ^ 3 : 8


  Reverse of Kashish:  hsihsaK

Multiplication of 3*4 ==  12

Pattern of 5 * 5 stars
* * * * *
* * * *
* * *
* *
*

*/