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
     
     if(s==strrev){
         cout<<"string is palindrome"<<"\n";
     }
     else{
         cout<<"string is not palindrome"<<"\n";
     }
    
 }
    
    return 0;
}