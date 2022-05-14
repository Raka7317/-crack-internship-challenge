#include<bits/stdc++.h>
using namespace std;



void printarray(int  arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    
     int arr1[] = {1 ,2, 3, 4, 5};
     int n1= sizeof(arr1)/sizeof(arr1[0]);
     printarray(arr1,n1);
     int temp=arr1[n1-1];
     for(int i=n1-1;i>0;i--){
         arr1[i]=arr1[i-1];
     }
     arr1[0]=temp;
     printarray(arr1,n1);
    return 0;
}