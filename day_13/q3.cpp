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
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0 ; i<n ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for (int i = 0 ; i<n ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout << largest << endl << smallest ;
}