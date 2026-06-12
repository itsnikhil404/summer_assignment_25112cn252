#include<iostream>
using namespace std ; 
bool ispalindrome(int n){
    int temp = n  ;
    int ans = 0 ; 
    while(n!=0){
    ans = n%10+ans*10;
    n = n/10;
    }
    if (temp == ans)
    return 1 ;
    else 
    return 0 ;
}
int main (){
    int n; 
    cin>>n;
    if(ispalindrome(n)){
        cout<<"no. is palindrome";
    }
    else 
    cout<<"no. is not palindrome";
}