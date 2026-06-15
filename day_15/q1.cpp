#include<iostream>
#include<vector>
using namespace std;
void reverse(int arr[], int n){
    int s = 0 , e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
       
    }
     for(int i = 0 ; i<n ; i++){
            cout<<arr[i]<<",";
        }

}
int main(){
int arr[100] = {1,2,3,4,5,6,7};

reverse(arr,7);
}