#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[]={  1, 5, 8, 10}  ;
    int n=sizeof(arr)/sizeof(arr[0]);
    int mn=INT_MAX;
    int mx=INT_MIN;
     for(int i=0;i<n;i++){
         
         if(arr[i]<mn){
             mn=arr[i];
         }
         if(arr[i>mx]){
             mx=arr[i];
         }
     }
    
    cout<<"the minimum difference between maximum and minimum is "<<mx<< " "<<mn;
    return 0;
}