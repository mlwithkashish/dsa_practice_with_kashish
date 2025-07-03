
// SINGH KASHISH
// 16-06-25
// TOPIC: Count Characters Different From Both Neighbours (String Logic Interview Question)
/*
 Time & Space Complexity:
Time Complexity: O(n)

Space Complexity: O(1) (no extra space used)
*/
#include <iostream>
#include <string>
using namespace std;

// Function to count characters that differ from both their neighbours
int countDifferentNeighbours(string s) {
    int count = 0;

    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Supports input with spaces

    int result = countDifferentNeighbours(s);
    cout << "Characters different from both neighbours: " << result << endl;

    return 0;
}
