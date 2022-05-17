#include<bits/stdc++.h>
using namespace std;


int main(){
    
    
  int t;
  cin>>t;
  while(t--){
      int n,m;
      cin>>n>>m;
      int a[n];
      int b[m];
      unordered_map<int ,int>mp;
      for(int i=0;i<n;i++){
          cin>>a[i];
            mp[a[i]]++;
      }
      int c=0;
      for(int i=0;i<m;i++){
          cin>>b[i];
      }
      for(int i=0;i<n;i++){
          if(mp[b[i]]){
            c++;  
          }
      }
      if(c!=n){
          cout<<"not subarray\n";
      }
      else{
          cout<<" it is subarray\n";
      }
  }
    
    
    return 0;
}