#include<bits/stdc++.h>
using namespace std;



int main(){
 int t;
 cin>>t;
  
 while(t--){
     string s;
     cin>>s;
     
     int n=s.length();
     string strrev;
     for(int i=n-1;i>=0;i--){
         strrev.push_back(s[i]);
         
     }
     cout<<strrev<<" ";
 }
    
    return 0;
}