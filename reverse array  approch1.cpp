#include<bits/stdc++.h>
using  namespace std;

void reversearray(int arr[], int n){
    
    int start=0;
    int end=n-1;
    
    while(start!=end){
        int  temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int n=5;
    int arr[n]={1,2,3,4,5};
    reversearray(arr,n);
    printarray(arr,n);
    
    
    
    
    return 0;
}