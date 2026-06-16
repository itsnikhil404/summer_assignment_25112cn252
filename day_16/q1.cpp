#include<iostream>
using namespace std; 

int missingNumber(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n-1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    return total - sum;
}
int main (){
    int arr[10] = {1,2,4,5,};
    cout << missingNumber(arr,5);
}