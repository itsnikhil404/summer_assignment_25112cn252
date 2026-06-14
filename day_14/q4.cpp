#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1,2,1,4,1,5,4};
    duplicate(arr,7);
}