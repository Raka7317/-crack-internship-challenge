#include<bits/stdc++.h>
using namespace std;
 void smallestsubarray(int arr[],int n,int x){
     int sum=0;
     int i=0,j=0;
     int mn=INT_MAX;
     while(i<=j and j<n){
      while(sum<=x and j<n){
            sum=sum+arr[j];
            j++;
         
     }
     while(sum>x and i<j){
         mn=min(mn,j-i);
         sum=sum-arr[i];
         i++;
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