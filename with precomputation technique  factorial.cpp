#include<bits/stdc++.h>
using namespace std;
 const int m=1e9+7;
 const int N=1e5+7;
 

int main(){
long long fact[N];
fact[0]=fact[1]=1;
for(int i=2;i<N;i++){
    fact[i]=(fact[i-1]*i)%m;
}
int t;
cout<<"enter the test cases\n";
cin>>t;
while(t--){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    cout<<fact[n]<<"\n";
}
    
    return 0;
}