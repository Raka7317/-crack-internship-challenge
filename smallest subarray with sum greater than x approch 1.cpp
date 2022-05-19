#include<bits/stdc++.h>
using namespace std;
 void smallestsubarray(int arr[],int n,int k){
     int mn=INT_MAX;
     for(int i=0;i<n;i++){
       int  sum=0;
         for(int j=i;i<n;i++){
             sum=sum+arr[j];
             if(sum>k){
                 mn=min(mn,j-i+1);
             }
         }
     }
     cout<<mn;
 }


int main(){
    
    
    int arr[]={1, 4, 45, 6, 0, 19};
    int k=51;
    int n=sizeof(arr)/sizeof(arr[0]);
    smallestsubarray(arr,n,k);
    
    return 0;
}