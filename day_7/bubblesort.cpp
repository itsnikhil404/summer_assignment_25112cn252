#include<iostream>
using namespace std;
void sortedarray(int arr[],int n){
    for(int i= 0 ;i < n-1;i++){
    for(int i = 0 ; i < n-i ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        } 
    }
}

}

int main (){
    int n =6 ;
    int arr[100]={10,1,7,6,14,9};
    sortedarray(arr,6);
    for(int i = 0 ; i<n ;i++){
        cout << arr[i]<<" " ;
    }
  return 0;
}