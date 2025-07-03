// Singh Kashish
// 16-06-25 10:07
// Topic: Most Imp Built In String Functions

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "KashishSingh";
    // Length()/size()
    cout << "Length: " << s.length() << endl;
    // substr(pos,len)
    cout << "Substring (0 to 6): " << s.substr(0, 6) << endl;

    // find substring
    int pos = s.find("sh");
    if (pos != string::npos)
        cout << "Found 'sh' at position: " << pos << endl;
    else
        cout << " 'sh' not found." << endl;

    // insert(pos, str)
    s.insert(6, "The"); // Insert "The" at index 6
    cout << "After Insert: " << s << endl;

    // erase(pos, len)
    s.erase(6, 3); // Erase "The"
    cout << "After Erase: " << s << endl;

    // replace(pos, len, str)
    s.replace(0, 3, "Ka"); // Replace "Kas" with "Ka"
    cout << "After Replace: " << s << endl;

    //  compare()
    string str1 = "abc", str2 = "abd";
    if (str1.compare(str2) < 0)
        cout << str1 << " is smaller than " << str2 << endl;

    //  push_back(char)
    s.push_back('X');
    cout << "After push_back: " << s << endl;

    // pop_back()
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // front() and back()
    cout << "Front: " << s.front() << " | Back: " << s.back() << endl;

    //  Traversal
    cout << "Characters: ";
    for (char c : s)
    {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
/* Length: 12
Substring (0 to 6): Kashis
Found 'sh' at position: 2
After Insert: KashisThehSingh
After Erase: KashishSingh
After Replace: KahishSingh
abc is smaller than abd
After push_back: KahishSinghX
After pop_back: KahishSingh
Front: K | Back: h
Characters: K a h i s h S i n g h
*/
/* BONUS: 
// reverse the string
#include<algorithm>
reverse(s.begin(), s.end());
cout << "Reversed: " << s << endl;

// convert to uppercase (character-wise)
for (char &c : s) c = toupper(c);
*/