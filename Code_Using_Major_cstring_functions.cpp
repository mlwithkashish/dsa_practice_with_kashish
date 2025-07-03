// SINGH KASHISH
// 17-06-25 14:40
// Topic: Most Important <cstring> functions (C-style strings)

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    // strlen()
    cout << "Length of str1: " << strlen(str1) << endl;

    // strcpy()
    char str3[50];
    strcpy(str3, str1);
    cout << "After strcpy, str3: " << str3 << endl;

    // strncpy()
    char str4[50];
    strncpy(str4, str2, 3);
    str4[3] = '\0'; // null terminate
    cout << "After strncpy, str4: " << str4 << endl;

    // strcat()
    strcat(str1, str2);  // str1 becomes HelloWorld
    cout << "After strcat, str1: " << str1 << endl;

    // strcmp()
    cout << "Comparing str1 and str2: " << strcmp(str1, str2) << endl;

    // strncmp()
    cout << "Comparing first 3 chars of str1 and str2: " << strncmp(str1, str2, 3) << endl;

    // strchr()
    char* pos = strchr(str1, 'W');
    if (pos != NULL)
        cout << "'W' found at index: " << (pos - str1) << endl;

    // strrchr()
    pos = strrchr(str1, 'l');
    if (pos != NULL)
        cout << "Last 'l' at index: " << (pos - str1) << endl;

    // strstr()
    pos = strstr(str1, "loWo");
    if (pos != NULL)
        cout << "Substring 'loWo' found at index: " << (pos - str1) << endl;

    return 0;
}
/*
Length of str1: 5
After strcpy, str3: Hello
After strncpy, str4: Wor
After strcat, str1: HelloWorld
Comparing str1 and str2: -1
Comparing first 3 chars of str1 and str2: -15
'W' found at index: 5
Last 'l' at index: 8
Substring 'loWo' found at index: 3
Press any key to continue . . .
*/
