// SINGH KASHISH
// 17-06-25
// TOPIC: Highest Frequency Character in a String
// Asked in: Amazon, Microsoft, Google, Adobe
// Focus: Hashing, ASCII Array, Frequency Count

#include <iostream>
#include <string>
using namespace std;

void findMaxFrequencyChar(string s) {
    // Assuming lowercase letters only ('a' to 'z')
    int freq[26] = {0};

    // Count frequency of each character
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Find character with highest frequency
    int maxFreq = 0;
    char maxChar = ' ';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = 'a' + i;
        }
    }

    cout << "Highest frequency character: " << maxChar << " (appears " << maxFreq << " times)" << endl;
}

int main() {
    string input;
    cout << "Enter a lowercase string: ";
    cin >> input;

    findMaxFrequencyChar(input);
    return 0;
}
/*
Enter a lowercase string: kashishh
Highest frequency character: h (appears 3 times)
*/
