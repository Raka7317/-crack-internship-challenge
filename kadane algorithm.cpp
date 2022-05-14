#include<bits/stdc++.h>
using namespace std;
void kadanealgorithm(int arr[],int n){
    int currentsum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum>mx){
            mx=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<mx;
}

int main(){
    int arr1[]={  1,2,3,-2,5}  ;

    int n1=sizeof(arr1)/sizeof(arr1[0]);
   kadanealgorithm(arr1,n1);
    return 0;
}