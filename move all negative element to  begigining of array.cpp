#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[], int n){
    
int i=-1;
int pivot=0;
for(int j=0;j<n;j++){
    if(arr[j]<pivot){
    if(i!=j)
    i++;
    swap(arr[i],arr[j]);
        
    }
}
    
}



void printarray(int  arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    
     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
  
     int n = sizeof(arr) / sizeof(arr[0]);
     printarray(arr,n);
     sorted(arr,n);
     printarray(arr,n);

    
    
    return 0;
}