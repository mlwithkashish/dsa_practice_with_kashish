// SINGH KASHISH
// 17-06-25
// TOPIC: Anagram Check (Leetcode 242 Style) – Using Frequency Array
// Asked in: Microsoft, Google, Amazon, Meta – String Processing / Hashing Logic
// Keywords: Sorting, Frequency Count, ASCII Mapping, Optimization

#include <iostream>
#include <string>
using namespace std;

// Function to check if two strings are anagrams
bool isAnagram(string s, string t) {
    // Step 1: Check if lengths differ
    if (s.length() != t.length()) return false;

    // Step 2: Frequency array for 26 lowercase English letters
    int freq[26] = {0};

    // Step 3: Update frequencies for both strings
    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;  // Increment for s
        freq[t[i] - 'a']--;  // Decrement for t
    }

    // Step 4: If all frequencies are zero → Anagram
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return false;
    }

    return true;
}

int main() {
    string s, t;

    // Input both strings
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    // Output Result
    bool result = isAnagram(s, t);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

/*
---------------------------------------------------------
Sample Input/Output:

Enter string s: anagram
Enter string t: nagaram
Output: true

Enter string s: rat
Enter string t: car
Output: false
---------------------------------------------------------

Time Complexity: O(n)
– We traverse both strings once (n = s.length())

Space Complexity: O(1)
– Constant space (fixed size array of 26)

 Interview Insights:
– Microsoft/Google ask this to test:
  → Your understanding of ASCII, string hashing, array logic
  → Ability to avoid sorting-based O(n log n) solutions
  → Efficient space usage and character mappings

Bonus Tip:
– Follow-up asked in interviews: What if it includes **Unicode**? Use unordered_map<char, int> instead.
---------------------------------------------------------
*/
