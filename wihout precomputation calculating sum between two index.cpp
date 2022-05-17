#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
 int a[N];
 

int main(){
 int n;
 cout<<"enter the size of array\n";
 cin>>n;
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 
 int q;
  cout<<"enter the  queries\n";
 cin>>q;
 while(q--){
     int l,r;
      cout<<"enter the the  l and r \n";
     
     cin>>l>>r;
     long long sum=0;
     for(int i=l;i<=r;i++){
         sum=sum+a[i];
     }
      
     cout<<"sum is " <<sum<<endl;
 }
    
    
    
    return 0;
}