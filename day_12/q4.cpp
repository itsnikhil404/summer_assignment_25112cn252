#include<iostream>
using namespace std ;
bool isperfect(int n){
    int sum = 0 ;
    for(int i = 1; i< n ; i++){
        if(n%i == 0){
            sum = sum + i;      
          }
    }
    if (sum == n)
    return 1 ;
    else 
    return 0;
}
int main(){
    int n;
    cout<<" intput no. to check perfect or not ";
    cin>>n;
    if (isperfect(n))
    cout << "perfect";
    else 
    cout << "NOT perfect ";

}