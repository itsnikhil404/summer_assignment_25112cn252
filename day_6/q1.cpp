#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long binary = 0;
    int place = 1;

    while(n > 0) {
        int bit = n % 2;
        binary += bit * place;

        place *= 10;
        n /= 2;
    }

    cout << binary;

    return 0;
}