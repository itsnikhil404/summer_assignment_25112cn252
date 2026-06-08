#include <iostream>
using namespace std;

int main() {
    int n, product = 1;

    cout << "Enter Number: ";
    cin >> n;

    while(n > 0) {
        product *= (n % 10);
        n /= 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}