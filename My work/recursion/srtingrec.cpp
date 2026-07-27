#include<iostream>
#include<string>
using namespace std ; 
void reverse(string &s){
    int n = s.length()-1;
    int i =0; 
     n = n-i-1 ;
   if(i>=n){
   return;
}
swap(s[i],s[n]);
i++;
return reverse(s);


}
int main(){
    string s = "babbar";
    reverse(s) ;
    cout << s; 

}
