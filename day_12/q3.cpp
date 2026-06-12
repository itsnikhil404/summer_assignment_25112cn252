#include<iostream>
using namespace std ; 

    int fib(int n) {
        int a = 0  ;
        int b = 1 ,c;  
       cout<< a << " "<< b<< " " ;

        for(int i = 2; i<=n ; i++){
            c = a+b;
            a = b;
            b=c; 
            cout<<c <<" ";
        }
        
    }
    int main (){
        int n; 
        cin>> n ; 
        fib(n);
    }