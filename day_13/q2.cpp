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
  int sum = 0 ;
  for(int i =0 ; i<n ; i++){
    sum = sum +arr[i];
  }
  float avg = sum /n ; 
  cout << "sum is  "<< sum << endl << "avg is "<< avg ;
}