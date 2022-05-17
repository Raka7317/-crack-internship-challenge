#include<bits/stdc++.h>
using namespace std;
void  triplet(int arr[], int n,int k){
    
    int ans=0;
    for(int i=0;i<n-2;i++){
        unordered_set<int>s;
        int curr=k-arr[i];
        for(int j=i+1;j<n;j++){
           if(s.find(curr-arr[j])!=s.end()){
               ans=1;
               break;
           }
           else{
               s.insert(arr[j]);
           }
        }
    }
    cout<< ans;
}

int main(){
    
int arr[]={1 ,4, 45, 6, 10, 8};
int n=sizeof(arr)/sizeof(arr[0]);
int k=13;
triplet(arr,n,k);

    
    
    
    return 0;
}