#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;

    cout << "Enter Number: ";
    cin >> n;

    original = n;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(original == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}