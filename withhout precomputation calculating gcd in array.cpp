#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N];

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int q;
     cin>>q;
     while(q--){
         int l,r;
         cin>>l>>r;
         int gc=0;
         for(int i=0;i<l;i++){
            gc=__gcd(gc,a[i]); 
         }
          for(int j=0;j<r;j++){
            gc=__gcd(gc,a[j]); 
         }
         cout<<gc;
     }
     
    }
    return 0;
}