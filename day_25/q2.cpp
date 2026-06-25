#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = "world";

    cout << "Common Characters: ";

    for (int i = 0; i < str1.length(); i++) {
        bool found = false;

        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        bool printed = false;
        for (int k = 0; k < i; k++) {
            if (str1[k] == str1[i]) {
                printed = true;
                break;
            }
        }

        if (found && !printed)
            cout << str1[i] << " ";
    }

    return 0;
}