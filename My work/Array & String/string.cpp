#include<iostream>
using namespace std; 
char tolowercase(char ch){
     if(ch>='a'&&ch<='z'|| ch >='0'&& ch<='9' ){
     return ch ;
    }
    else{
        ch = ch-'A'+'a';
            }
}
bool checkpalindrome(char name[] , int n){
    int s = 0 ,e= n-1 ;
    while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }
        s++;
        e--;
    }
}
void reverse(char name [],int n){
    int s = 0 , e = n-1 ;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int getlenght(char name[]){
    int count  = 0; 
    for(int i = 0 ; name[i]!='\0'; i++){
        count++; 
    }
    return count ; 

}
int main (){
    char name[10] ;
    cin >> name ;
    int lenght =  getlenght(name);
    cout << lenght << endl ;
    reverse(name,lenght);
    cout << name << endl;

    if(checkpalindrome(name , lenght)){
        cout<<" palindrome"; 
    }
    else {
        cout << "not palindrome";
    }
}