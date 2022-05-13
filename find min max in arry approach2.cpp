#include<bits/stdc++.h>
using  namespace std;

void  minmax(int arr[],int n){
   int min=arr[0];
   int mx=arr[0];
   for(int i=1;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
       if(arr[i]>mx){
           mx=arr[i];
       }
   }
   cout<<min<<" "<<mx<<"\n";
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    
    int n=5;
    int arr[n]={1,2,3,4,5};
    cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
    printarray(arr,n);
   
    minmax(arr,n);
    
    
    
    
    
    return 0;
}