#include<iostream> 
#include<vector>
using namespace std ; 
void merge(int arr1[],int n , int arr2[],int m ){
    for(int j = 0; j < m ; j++){
        arr1[j+n]=arr2[j];
    }
}
int main (){
    int arr1[10]={1,2,2,3};
    int arr2[10]={2,3,4,4};
    int n = 4,m=4;
    int uni[100];
    int k = 0 ; 
    merge(arr1,n,arr2,m);

    for(int i = 0 ; i< m+n ;i++){
        bool found = false; 
       for(int j = 0 ; j<k; j++){
        if(arr1[i]==uni[j]){
            found = true;
        }
        }
        if(!found){
            uni[k++] =arr1[i];
       }
        
        }
    for(int i =0 ; i<k ; i++){
        cout<<uni[i]<<" ";
    }
   
}