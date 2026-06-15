#include<iostream>
using namespace std; 
void movezero(int arr[],int n){
    for(int j = 0 ; j< n ; j++){
   for(int i = 0 ; i< n ; i++){
    if(arr[i+1]!=0){
        swap(arr[i],arr[i+1]);
    }
   }
}
   for(int i = 0 ; i< n ; i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[100]={1,0,0,4,0,6,0,8};
   movezero(arr,8);
    
}