#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter Number: ";
    cin >> n;

    while(n > 0) {
        count++;
        n /= 10;
    }

    cout << "Digits = " << count;

    return 0;
}