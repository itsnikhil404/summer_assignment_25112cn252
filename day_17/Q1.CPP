#include<iostream> 
using namespace std ; 
void merge(int arr1[], int n , int arr2[] ,int m){
            for(int j = 0 ; j<m +n; j++){
                arr1[j+n]=arr2[j];
            }
    
}

int main(){
int arr1[10] ={1,2,3,4};
int arr2[10]={5,6,7};
merge(arr1,4,arr2,3);
for(int i = 0 ; i<7; i++){
    cout<<arr1[i]<<" ";
}
}