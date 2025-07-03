#include <iostream>
#include <cmath>
using namespace std;

// Global counter for total recursive calls
int count = 0;

//  1. Recursive Fibonacci Function
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//  2. Fibonacci Series using basic recursion
int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

//  3. Fibonacci using Tail Recursion
void printFibonacciTail(int n, int a = 0, int b = 1) {
    if (n == 0) return;
    cout << a << " ";
    printFibonacciTail(n - 1, b, a + b);
}

//  4. Count total recursive calls for Fibonacci(n)
int totalFibonacciCalls(int n) {
    count++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return totalFibonacciCalls(n - 1) + totalFibonacciCalls(n - 2);
}

//  5. Check if a number is Fibonacci
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

//  6. Smallest Fibonacci number greater than x
int nextFibonacci(int x) {
    int a = 0, b = 1;
    while (b <= x) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

//  7. Last digit of nth Fibonacci number
int fibonacciLastDigit(int n) {
    if (n == 0) return 0;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = (a + b) % 10;
        a = b;
        b = c;
    }
    return b;
}

//  8. Print Fibonacci numbers in range [a, b]
void printFibonacciRange(int a, int b) {
    int x = 0, y = 1;
    while (x <= b) {
        if (x >= a)
            cout << x << " ";
        int z = x + y;
        x = y;
        y = z;
    }
}

//  MAIN FUNCTION
int main() {
    int n;
    cout << "Enter the position (n) to find Fibonacci Number: ";
    cin >> n;

    // 1. nth Fibonacci number
    cout << "\n" << n << "th Fibonacci number: " << fibonacci(n) << endl;

    // 2. Fibonacci Series (Basic Recursion)
    cout << "\nFibonacci Series using recursion: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacciSeries(i) << " ";
    }

    // 3. Fibonacci Series (Tail Recursion)
    cout << "\nFibonacci Series using tail recursion: ";
    printFibonacciTail(n);

    // 4. Total Function Calls
    count = 0;
    int result = totalFibonacciCalls(n);
    cout << "\n\nFibonacci(" << n << ") = " << result;
    cout << "\nTotal Recursive Function Calls: " << count << endl;

    // 5. Check if number is Fibonacci
    cout << "\nCheck if a number is Fibonacci:\n";
    if (isFibonacci(n))
        cout << n << " is a Fibonacci number.\n";
    else
        cout << n << " is NOT a Fibonacci number.\n";

    // 6. Smallest Fibonacci greater than n
    cout << "\nSmallest Fibonacci number greater than " << n << " is: " << nextFibonacci(n) << endl;

    // 7. Last digit of Fibonacci(n)
    cout << "\nLast digit of Fibonacci(" << n << ") is: " << fibonacciLastDigit(n) << endl;

    // 8. Fibonacci numbers between 10 and 20
    int a = 10, b = 20;
    cout << "\nFibonacci numbers between " << a << " and " << b << ": ";
    printFibonacciRange(a, b);

    cout << endl;
    return 0;
}
/*
Enter the position (n) to find Fibonacci Number: 6

6th Fibonacci number: 8

Fibonacci Series using recursion: 0 1 1 2 3 5
Fibonacci Series using tail recursion: 0 1 1 2 3 5

Fibonacci(6) = 8
Total Recursive Function Calls: 25

Check if a number is Fibonacci:
6 is NOT a Fibonacci number.

Smallest Fibonacci number greater than 6 is: 8

Last digit of Fibonacci(6) is: 8

Fibonacci numbers between 10 and 20: 13
Press any key to continue . . .

*/