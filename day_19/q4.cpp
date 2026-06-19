#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[100][100];
    int sum = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> A[i][j];

            if(i == j)
                sum += A[i][j];
        }
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}