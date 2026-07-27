#include<iostream>
using namespace std; 
void merge(int arr[],int s , int e ){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int num1[10]; 
    int num2[10];
    int k=s ; 
    for(int i = 0 ; i<len1 ; i++){
        num1[i] = arr[k++];
    }
    k = mid+1 ; 
    for(int j = 0 ; j<len2 ; j++){
        num2[j] = arr[k++];
    }
    int i = 0 , j = 0 ; 
    while(i<len1 && j < len2){
       if(num1[i]<num2[j]) {
        arr[s++] = num1[i++]; }
        else{
            arr[s++] = num2[j++];
        }
    }
    while(i<len1){
        arr[s++]=num1[i++];
    }
    while(j<len2){
        arr[s++]=num2[j++];
    }
}
   
   
void mergesort(int arr[] ,int s , int e ){
    if(s>=e){return ;}
    int mid = s+(e-s)/2 ; 
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
    
}

int main(){
    int arr[10] = {38,27,43,3,9,82,10};
    int s = 0 , e = 6 ; 
    mergesort(arr,s,e);
    for(int i = 0 ; i<7 ; i++){
        cout << arr[i] <<" ";
    }
}