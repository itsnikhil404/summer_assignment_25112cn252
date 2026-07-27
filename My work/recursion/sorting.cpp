#include<iostream>
using namespace std;
//selection sort 
/*void sorting(int arr[],int n){
   if(n==1){return;}
   int minindex = 0 ; 
  for(int j = 1 ; j<n ; j++){
    
    if(arr[j]< arr[minindex]){
        minindex = j;
    }
  }
  swap(arr[minindex],arr[0]);
  sorting(arr+1,n-1);
}*/
void sorting(int arr[],int n){
    if(n==1){return ; }
    for(int i  = 1 ; i<n ; i++){
       int temp = arr[i];
        int j = i-1  ; 
        while( j>=0 && arr[j]>temp ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= temp ; 
    }
}

int main(){
    int arr[10] ={3,99,1,66,8,7};
    sorting(arr, 6);
    for(int i =0 ; i<6;i++){
        cout<< arr[i] << " ";
    }
}