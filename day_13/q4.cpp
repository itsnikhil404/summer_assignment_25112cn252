#include<iostream>
using namespace std;
int main (){
    int arr[100];
    int n ; 
    cout <<"enter the size of array ";
    cin >> n;
    cout << "input array"<<endl;;
    for(int i= 0 ;i<n;i++){
        cin>>arr[i];
    }
    int counteven = 0;
    int countodd = 0; 
    for (int i = 0 ; i<n ;i++ ){
        if(arr[i]%2==0 ){
            counteven++;
        }
        else countodd++;
    }
    cout << "even elements "<< counteven <<endl << "odd elements "<< countodd ;
}
