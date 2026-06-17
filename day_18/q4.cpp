#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[100] ={64,24,12,22,11};
    int n = 5;
    int i,j;
   for( i = 0; i <n -1; i++){
    for ( j = 0; j<n-i-1;j++){
        if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    } 
   }
    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<" ";
    }
}