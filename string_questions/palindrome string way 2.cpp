#include<bits/stdc++.h>
using namespace std;


int main(){
    
    char arr[]={'a','b','c','d'};
    char arr2[]={'a','b','c','d'};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
          check=false;
    } 
    
    
    
    }
    if(check==true){
        cout<<"string is plaindrome";
        
    }
    else{
        cout<<"string is not palindrome";
    }
    return 0;
    
}