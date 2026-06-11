#include<iostream>
using namespace std; 
#include<vector>
#include<algorithm>
#include<array>
vector<int> sumofarray(int a[], int n  , int b[] , int m ){
    
    int  i  = n-1;
    int j = m-1;
    vector <int> ans;
    int carry = 0 ;
    while (i >=0 && j >= 0 ){
        int sum =a[i]+ b[j] + carry ;
        carry = sum /10; 
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
        
    }
    while (i>=0){
          int sum =a[i] + carry ;
        carry = sum /10; 
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
          int sum =b[j] + carry ;
        carry = sum /10; 
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
          int sum = carry ;
        carry = sum /10; 
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans ;
    

}

int main (){
    int a[4] = {1,2,3,4};
    int b[1] = {6};
    vector<int> result = sumofarray(a,4,b,1);
    for (int i = 0 ;i < result.size(); i++){
        cout << result[i]<<" ";
    }

    



}