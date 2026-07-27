#include<iostream>
using namespace std ; 
int BinarySearch(int arr[],int s , int e, int key){
    if(s>e){
        return 0; 
    }
    int mid = s +(e-s)/2 ; 
    if(arr[mid]==key ){
        return mid;
    }
    else {
    if (arr[mid]<key){
        return BinarySearch(arr, mid+1,e,key);
    }
    else
    return BinarySearch(arr,s,mid-1,key);
}
}
int main(){
    int arr[10] = {3,5,1,2,6};
    int s = 0, e = 4;
    int mid = s - (e-s)/2 ;
    int key = 2 ;
    int ans = BinarySearch(arr,s,e,key) ;
    cout << ans; 

}
