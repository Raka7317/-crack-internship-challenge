#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
 long long prefixsum[N][N];
   
int main(){

int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}

 for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        prefixsum[i][j]=prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1];
    }
}
   
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum=prefixsum[c][d]-prefixsum[a][b-1]-prefixsum[a-1][b]+prefixsum[a-1][b-1];
    }
    
    
    return 0;
}