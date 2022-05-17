#include<bits/stdc++.h>
using namespace std;

void countpairs(int arr[],int n,int k){
 unordered_map<int,int>mp;
 int ans=0;
 for(int i=0;i<n;i++){
     int b=k-arr[i];
     if(mp[b]){
         ans+=mp[b];
     }
      mp[arr[i]]++;
 }
 cout<< ans;
}

int main(){
   
   
   
   int k=6;
    int arr[]={1, 5, 7, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    countpairs(arr,n,k);
    return 0;
}