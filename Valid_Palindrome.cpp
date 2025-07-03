// SINGH KASHISH
// 17-06-25 15:02
// Topic: Valid Palindrome (Leetcode 125 Style – Microsoft/Google Interview)

#include <iostream>
#include <string>
#include <cctype>  // for isalnum and tolower
using namespace std;

//  Time Complexity: O(n)
//  Space Complexity: O(1) – in-place two-pointer method
bool isValidPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isValidPalindrome(s)) {
        cout << " It's a valid palindrome.\n";
    } else {
        cout << " Not a valid palindrome.\n";
    }

    return 0;
}
