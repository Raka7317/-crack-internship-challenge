#include<bits/stdc++.h>
using namespace std;

void elements(int arr[],int n,int k){
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int x=n/k;
    unordered_map<int,int>::iterator it;
   for(auto it=mp.begin();it!=mp.end();it++){
       if(it->second>x){
           cout<<it->first<<" ";
       }
   }
    
}


int main(){
    
int arr[]={1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
int n=sizeof(arr)/sizeof(arr[0]);
int k=4;
elements(arr,n,k);

    
    
    
    return 0;
}