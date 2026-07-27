#include<iostream>
using namespace std;
void sorting(int arr[],int n){
   for(int i =0 ; i<n ; i++){
   
    for(int j = 0 ; j < n-i ; j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            
        }    
    }
   }
}
int main(){
    int arr[10] ={7,4,2,1,5,6};
    sorting(arr, 6);
    for(int i =0 ; i<6;i++){
        cout<< arr[i] << " ";
    }
}