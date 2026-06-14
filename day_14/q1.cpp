#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key ){
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==key ){
            return i ;
        }
    }
}
int main (){
    int arr[50]= {4,7,6,3,8,9};
    int key;
    cin >> key;
    cout<<linearsearch(arr,6,key);
}