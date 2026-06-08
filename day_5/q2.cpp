#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while(n > 0) {
        int digit = n % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}