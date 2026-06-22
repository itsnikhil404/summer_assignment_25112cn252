#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool palindrome = true;
    int n = str.length();

    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}