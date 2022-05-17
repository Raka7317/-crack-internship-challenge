#include<bits/stdc++.h>
using namespace std;
void  triplet(int arr[], int n,int s){
    int ans=0;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
               if(arr[i]+arr[j]+arr[k]==s){
                   ans=1;
               }
           }
       }
   }
   if(ans==1){
       cout<<"yes triplet is present \n";
       
   }
   else{
       cout<<" no triplet is present\n";
   }
}

int main(){
    
int arr[]={1 ,4, 45, 6, 10, 8};
int n=sizeof(arr)/sizeof(arr[0]);
int k=13;
triplet(arr,n,k);

    
    
    
    return 0;
}