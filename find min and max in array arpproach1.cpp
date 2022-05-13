#include<bits/stdc++.h>
using  namespace std;

void  minmax(int arr[],int n){
    sort(arr,arr+n);
    int min=arr[0];
    int max=arr[n-1];
    cout<<min<<" "<<max<<" \n";
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