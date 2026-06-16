#include<iostream>
using namespace std; 


int main (){
    int arr[10] = {1,2,2,5,5,6,6,5};
    int n = 8 ;
    int i = 0;

    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            cout<<arr[i];
            arr[i] = arr[j];
        }
    }

}