#include<bits/stdc++.h>
using namespace std;

void countpairs(int arr[],int n,int k){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;i++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    cout<<count;
}

int main(){
   
   
   
   int k=6;
    int arr[]={1, 5, 7, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    countpairs(arr,n,k);
    return 0;
}