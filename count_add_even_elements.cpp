#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5, even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << "\nOdd: " << odd << endl;
    return 0;
}
/* Even: 2
Odd: 3 */