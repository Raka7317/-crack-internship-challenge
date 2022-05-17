#include<bits/stdc++.h>
using namespace std;
const  int N=1e7;
long  long ar[N];

int main(){
int n,m;
cout<<"enter  the size  of array and queries\n";
cin>>n>>m;
while(m--){
    int a,b,d;
    cout<<"enter the indexes and the value to add\n";
    cin>>a,b,d;
    ar[a]+=d;
    ar[b+1]-=d;
    
}

for(int i=1;i<=n;i++){
    ar[i]+=ar[i-1];
}
     long long mx=-1;
     for(int i=0;i<n;i++){
         if(ar[i]>mx){
             mx=ar[i];
         }
     }
    cout<<"maximum  value is"<<mx;
    return 0;
}