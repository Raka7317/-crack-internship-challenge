#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int n;
 cin>>n;
 long long int fact=1*1ll;
 for(int i=2;i<=n;i++){
     fact=i*fact;
 }
    
    cout<<fact;
    
    return 0;
}