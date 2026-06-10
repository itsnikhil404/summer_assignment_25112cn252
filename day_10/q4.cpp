#include<iostream>
using namespace std ;
int main(){
    int n ,i,j;
    char ch = 'A';
    cin>>n;
  for(i =1 ; i <=n ; i++){
    for(j = 1 ; j <= n-i ; j++){
        cout << " ";

    }
    for (j = 1 ; j <= i;j++){
        cout<<char(ch+j-1);

    }
    for(int k = i-1; k>=1;k--){
        cout<<char(ch+k-1);
    }
    cout << endl;
  }
    
 
}