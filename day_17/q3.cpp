#include<iostream> 
#include<vector>
using namespace std ; 
int main (){
    int arr1[10]={1,2,2,3};
    int arr2[10]={2,3,4,4};
    int n = 4,m=4;
    int ans[100];
    int k = 0 ; 
    for(int i = 0 ; i<n ;i++){
        bool found = false; 
       for(int j = 0 ; j<k; j++){
        if(arr1[i]==arr2[j]){
            found = true;
            break;
 }
        }
        bool alrdon = false;
        for(int j = 0 ; j<k; j++){
        if(arr1[i]==ans[j]){
            alrdon = true;
            break;
        }
        }

        if(found && !alrdon){
            ans[k++] =arr1[i];
       }
        
        }
    for(int i =0 ; i<k ; i++){
        cout<<ans[i]<<" ";
    }
   
}