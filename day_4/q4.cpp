#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int num = start; num <= end; num++) {

        int original = num;
        int digits = 0;
        int sum = 0;

        int temp = num;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if(sum == original)
            cout << num << " ";
    }

    return 0;
}