#include<bits/stdc++.h>
using namespace std;
 const int m=1e9+7;

int main(){
    
  int t;
  cout<<"enter the test cases\n";
  cin>>t;
 
  while(t--){
      int n;
      cout<<"eneter the number for factorial\n";
      cin>>n; 
       long long  fact=1;
      for(int i=2;i<n;i++){
          fact=(fact*i)%m;
      }
        cout<<fact;
  }

    
    return 0;
}