#include<bits/stdc++.h>
using namespace std;


int main(){
    
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int arr[n+1];
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          
      }
      unordered_map<int,int>mp;
      
  int f=0;
  int sum=0;
  for(int i=0;i<n;i++){
      if(sum==0 or arr[i]==0 or mp[sum]){
          f=1;
      }
      else{
          mp[sum]=1;
      }
  }
  if(f==1){
      cout<<"yes";
  }
  else{
      cout<<"no";
  }
      
  }
    
    
    
    
    return 0;
}