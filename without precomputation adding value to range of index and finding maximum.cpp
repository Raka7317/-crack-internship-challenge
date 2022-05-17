#include<bits/stdc++.h>
using namespace std;
const  int N=1e7;
long  long ar[N];

int main(){
int n,m;
cin>>n>>m;
while(m--){
    int a,b,d;
    cin>>a,b,d;
    for(int i=a;i<=b;i++){
        ar[i]+=d;
        
    }
}
     long long mx=-1;
     for(int i=0;i<n;i++){
         if(ar[i]>mx){
             mx=ar[i];
         }
     }
    cout<<mx;
    return 0;
}