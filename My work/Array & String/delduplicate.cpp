#include<iostream>
using namespace std; 

int main (){
    string s; 
    cin>>s;
    string ans ="";
    for(int i=0;i<s.length(); i++){
        if(!ans.empty()&& ans.back()==s[i]){
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
    }
    cout << ans ;
}