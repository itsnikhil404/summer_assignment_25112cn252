#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    long long ans = 1;

    for(int i = 1; i <= n; i++) {
        ans *= x;
    }

    cout << ans;

    return 0;
}