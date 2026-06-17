#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[100] ={64,24,12,22,11};
    int n = 5;
   for(int i =0 ; i<n;i++){
    for(int j = i; j<n ; j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
   }
    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<" ";
    }
}