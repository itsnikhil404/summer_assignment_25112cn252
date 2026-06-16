#include<iostream>
using namespace std; 

int maxFreqElement(int arr[], int n) {
    int maxFreq = 0;
    int ans = arr[0];

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq) {
            maxFreq = count;
            ans = arr[i];
        }
    }

    return ans;
}
int main (){
    int arr[10] = {1,2,4,5,3,5,6,5};
    cout << maxFreqElement(arr,8);
}