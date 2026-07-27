#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array is  "<< n <<endl; 
    for(int i = 0 ; i<n ; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[], int n , int key){
    print(arr,n);
    if(n==0){
        return false ;
    }
    if(arr[0]==key){
        return true ;
    }
    else 
    return linearsearch(arr+1,n-1,key);
}
int main(){
    int arr[10] = {3,5,1,2,6};
    int key  ; 
    cin >> key ;
    bool ans = linearsearch(arr,5,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else 
    cout << "not present"<<endl;
}