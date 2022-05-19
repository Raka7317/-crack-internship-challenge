#include<bits/stdc++.h>
using namespace std;

void trappingwater(int arr[],int n){
    int mx1=arr[0];
    int mx2=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx1){
            mx2=mx1;
            mx1=arr[i];
            
        }
        else if(arr[i]>mx2 and arr[i]<mx1){
            mx2=arr[i];
        }
    }
   
    
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=mx2){
            sum=sum+(mx2-arr[i]);
        }
        else{
            sum=sum+(mx2-mx2);
        }
    }
    cout<<sum;
}

int main(){
    
    int arr[]={3,0,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    trappingwater(arr,n);
    
    
    
    return 0;
}