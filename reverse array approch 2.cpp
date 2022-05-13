#include<bits/stdc++.h>
using  namespace std;

void reversearray(int arr[], int n){
 
 for(int i=0;i<=n/2;i++){
     swap(arr[i],arr[n-1-i]);
 }
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
   
    reversearray(arr,n);
    printarray(arr,n);
    
    
    
    
    return 0;
}