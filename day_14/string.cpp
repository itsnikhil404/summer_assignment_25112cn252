#include<iostream>
using namespace std;
string reverse(string a){
    int s = 0, e = a.size()-1;
    while (s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}
int main(){
    string s = "My name is Nikhil";
    string ans ="";
    string word = "";
    for(int i= 0 ; i<=s.length();i++){
        if(i == s.length() || s[i] == ' '){
            ans += reverse(word);
            ans +=' ';
            word = "";
        }
        else
        word +=s[i] ;
    }
    cout << ans ;
}