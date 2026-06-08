#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while(n > 0) {
        count += n % 2;
        n /= 2;
    }

    cout << count;

    return 0;
}