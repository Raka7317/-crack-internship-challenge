#include<bits/stdc++.h>
using namespace std;
void trappingrainwater(int arr[],int n){
    int mx1=arr[0];
    int mx2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>mx1){
            mx2=mx1;
            mx1=arr[i];
        }
        else if( arr[i]<mx1 and arr[i]>mx2){
            mx2=arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(mx2-arr[i]);
    }
    cout<<sum;
}

int main(){
    int arr[]={3,0,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    trappingrainwater(arr,n);
    
    
    
    return 0;
}