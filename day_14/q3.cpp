#include<iostream>
using namespace std;
int sort(int arr[],int n){
    for(int i = 0; i<n ; i++){
        for(int j =0; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }

        }
    }
        return arr[n-2];
    }
int main (){
    int arr[50]= {1,2,1,4,1,5,1};
    cout<<sort(arr,7);
}