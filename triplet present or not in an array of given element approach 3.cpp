#include<bits/stdc++.h>
using namespace std;
void  triplet(int arr[], int n,int s){
  sort(arr,arr+n);
  int ans=0;
  
  for(int i=0;i<n-2;i++){
      int l=i+1;
      int r=n-1;
  
  while(l<r){
      if(arr[i]+arr[l]+arr[r]==s){
    ans=1; 
    break;
  }
  else if(arr[i]+arr[l]+arr[r]<s){
      l++;
  }
  else{
      r--;
  }
  }
 
}
 if(ans==1){
      cout<<"yes triplet is present\n";
  }
  else{
      cout<<"no the triplet is not present\n";
      }
}

int main(){
    
int arr[]={1 ,4, 45, 6, 10, 8};
int n=sizeof(arr)/sizeof(arr[0]);
int k=13;
triplet(arr,n,k);

    
    
    
    return 0;
}