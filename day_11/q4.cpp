#include<iostream>
using namespace std;
int factorial(int n){
    if (n<0){
        return -1;
    }
    if (n==0){
        return 1 ;
    }
    int fact =1;
    while(n!=0){
        fact = fact*n;
        n--;
    }
    return fact;
}
int main(){
    int n;
    cout <<"intput the number ";
    cin>>n;
    cout<<factorial(n);
    
};