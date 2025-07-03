#include<iostream>
#include<string>
using namespace std;

void updation() {
    string str = "Kashish";
    cout << "Original String: " << str << endl;

    // Update character at index 2 (0-based indexing)
    str[2] = 'T';
    cout << "Updated String: " << str << endl;

    // Another string
    string str3 = "Aarsh";
    cout << "\nOriginal str3: " << str3 << endl;

    // Update even-indexed characters to 't'
    for(int i = 0; str3[i] != '\0'; i++) {
        if(i % 2 == 0) str3[i] = 't';  // ✅ Fixed assignment
    }

    cout << "Updated str3 with even indices as 't': " << str3 << endl;
}

int main() {
    // 1. Declaration and Initialization
    string str1 = "Kashish";
    string str2;

    // 2. Take input without space
    cout << "Enter a string (no spaces): ";
    cin >> str2;
    cout << "You entered: " << str2 << endl;

    // 3. Input with spaces
    string fullName;
    cout << "\nEnter your full name: ";
    cin.ignore(); // To avoid issues with getline
    getline(cin, fullName);
    cout << "Full Name: " << fullName << endl;

    // 4. Character access
    cout << "\nFirst character of str1: " << str1[0] << endl;
    cout << "Last character of str1: " << str1[str1.size() - 1] << endl;

    // 5. Traversing the string
    cout << "\nCharacters in str1 using loop: ";
    for(int i = 0; i < str1.length(); i++) {
        cout << str1[i] << " ";
    }

    // 6. Updation
    cout << "\n\nUpdate characters in a string:\n";
    updation();

    return 0;
}
/*
Enter a string (no spaces): Kashish
You entered: Kashish

Enter your full name: Singh Kashish
Full Name: Singh Kashish

First character of str1: K
Last character of str1: h

Characters in str1 using loop: K a s h i s h

Update characters in a string:
Original String: Kashish
Updated String: KaThish

Original str3: Aarsh
Updated str3 with even indices as 't': tatst
*/