#include<iostream>
#include<climits>
using namespace std;
int BinarySearch(int arr[] , int n , int key ){
    int s = 0 ; 
    int e = n -1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]==key){
            return mid;
        }
        else
        return -1;
        if(arr[mid] > key ){
            e = mid - 1 ;
        }
        else{
            s = mid +1 ;
        }
        


    }


}
int main(){
    int arr[100] ={11,12,22,24,64};
    int n = 5;
   int key ; 
   cin>> key ; 
   cout << BinarySearch(arr,n ,key);
   
   

}