#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N];
int prefixsum[N];

int main(){
    


int t,i;
cin>>t;
while(t--){
    int n;

    cin>>n;
    int forward[n+10];
int backward[n+10];
forward[0]=backward[n+1]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        for(int i=n;i>0;i--){
            forward[i]=__gcd(forward[i+1],a[i]);
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            int gc=0;
            cout<<__gcd(forward[i-1],backward[r+1]);
        }
}

    return 0;
}