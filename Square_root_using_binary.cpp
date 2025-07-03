// SINGH KASHISH
// 18-06-25
// Topic: Square Root using Binary Search
// Asked in: Google, Microsoft, Amazon, Facebook

#include<iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int low = 1, high = x;
    int ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == x)
            return mid;
        else if (mid * mid < x) {
            ans = mid;         // store result and move right
            low = mid + 1;
        }
        else {
            high = mid - 1;    // move left
        }
    }

    return ans;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = mySqrt(x);
    cout << "Square root of " << x << " (rounded down) is: " << result << endl;

    return 0;
}
