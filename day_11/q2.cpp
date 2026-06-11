#include<iostream>
using namespace std;
int maximum(int a , int b){
    if (a>b)
    return a;
    else 
    return b;
}
int main(){
    int a,b;
    cout <<"intput a&b:- ";
    cin>>a>>b;
    cout<< "max no. is: " <<maximum(a,b);
}