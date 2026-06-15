#include<iostream>
using namespace std; 
void rotatearray(int arr[],int n,int k){
    int temp [100];
    for(int i= 0; i<n;i++){
        temp[i]=arr[(i+k)%n] ;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int arr[100]={1,2,3,4,5,6,7,8};
    rotatearray(arr,8,2);
    
}