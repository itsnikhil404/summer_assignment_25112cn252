#include<iostream>
using namespace std;
int partition(int arr[], int s , int e){
    int count = 0 ;  
    for(int i = s; i<=e ; i++){
        if(arr[s]> arr[i]){
            count++; 
        }
    }
    int pivotindex = s + count ; 
    swap(arr[pivotindex],arr[s]);
    int i = s,j= e; 
while(i < pivotindex && j>pivotindex){
    while (arr[i]<arr[pivotindex]){
        i++;
    }
    while(arr[j]>arr[pivotindex]){
        j--; 
    }
    if(arr[i]> arr[pivotindex]&& arr[j]<arr[pivotindex]){
        swap(arr[i],arr[j]);
        i++; 
        j--; 
    }
}
return pivotindex ; 

}

void quicksort(int arr[] ,int s ,int e ){
    if(s>=e){
        return ; 
    }
    int p = partition(arr,s,e);
    quicksort(arr , s , p-1);
    quicksort(arr, p+1, e);
}
int main(){
    int arr[10] = {2,4,1,6,9};
    int s = 0, e = 4;
    quicksort(arr,s,e);
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}