#include <iostream>
using namespace std;

void commonElements(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 4, 6};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    commonElements(arr1, n, arr2, m);

    return 0;
}