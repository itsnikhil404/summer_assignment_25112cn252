#include<iostream>
using namespace std;
int sum(int a , int b ){
    return a+b ; 
}
int main(){
    int a,b;
    cout <<"intput a&b:-";
    cin>>a>>b;
    cout<< "sum is: " <<sum(a,b);
}