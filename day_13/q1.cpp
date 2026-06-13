#include<iostream>
using namespace std;
int main (){
    int arr[100];
    int n ; 
    cout <<"enter the size of array ";
    cin >> n;
    cout << "input array"<<endl;;
    for(int i= 0 ;i<n;i++){
        cin>>arr[i];
    }
    cout << "your array is ";
    for (int j = 0 ; j<n; j++){
        cout << arr[j]<<" ";
    }
}