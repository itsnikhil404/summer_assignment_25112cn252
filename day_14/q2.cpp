#include<iostream>
using namespace std;
int togetfrequency(int arr[],int n,int key){
        int count =0;
        for(int j =0 ; j<n ; j++){
            if(key == arr[j]){
                count++;
            }

        }
        return count ;
    }
int main (){
    int arr[50]= {1,2,1,4,1,5,1};
    int key ;
    cin>>key;
    cout<<togetfrequency(arr,7,key);
}