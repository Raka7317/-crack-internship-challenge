#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[]={  -5,-1,5,-3,-1,2,3,-6}  ;
    int n=sizeof(arr)/sizeof(arr[0]);
    int current=0;
    int mx=0;
    for(int i=0;i<n;i++){
        current+=arr[i];
        if(current<0){
        current=0;
        }
        if(current>mx){
            mx=current;
        }
    }
    
    cout<<mx;
    return 0;
}