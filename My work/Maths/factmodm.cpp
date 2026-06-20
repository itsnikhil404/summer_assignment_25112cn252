#include<iostream>
using namespace std ;
int factmod(int n ,int m ){
    int fact = 1;
    while(n>0){
        fact = (1LL*fact*(n))%m;
        n--;
    }
    return fact ;
}
int main(){
    int n , m; 
    cin >>n >> m ;
    cout <<factmod(n,m);
}