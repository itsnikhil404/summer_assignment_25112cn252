#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter Number: ";
    cin >> n;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << "Reversed Number = " << rev;

    return 0;
}