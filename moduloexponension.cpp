#include<iostream>
using namespace std;
int moduloexpension(int x , int n ,int m){
    int res = 1; 
    while(n>0){
        if(n&1){
            res =(1LL* res * x)%m;
        }  
        x = (1LL*x *x)%m ;
        n = n>>1 ; 
    }
    return res;
}
int main (){
    int x,n,m;
    cout<<"enter the value of x,n,m : ";
    cin>>x>>n>>m ;

    cout<<moduloexpension(x,n,m);
}