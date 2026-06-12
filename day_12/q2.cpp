#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std ; 
bool isarmstrong(int n){
    int temp = n ;
     int count = 0 ,ans = 0;
     while(n!=0){
        count++;
       n = n/10;
     }
     n=temp;
     while(n!=0){
     ans = (int)pow(n%10,count)+ans;
     n= n/10;
     }
     if(ans==temp)
     return 1; 
     else 
     return 0;

}
int main (){
    int n; 
    cin>>n;
    if(isarmstrong(n)){
        cout<<"no. is armstrong";
    }
    else 
    cout<<"no. is not armstrong";
}