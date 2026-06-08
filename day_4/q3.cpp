#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int digits = 0;
    int sum = 0;

    int temp = n;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}