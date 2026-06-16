#include<iostream>
using namespace std; 


int main (){
    int arr[10] = {1,2,4,5,3,5,6,5};
    int n = 8 ;
    int target ;
    cin>>target ;
    for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(arr[i] + arr[j] == target) {
            cout << arr[i] << " " << arr[j]<<endl;
        }
    }
}
}