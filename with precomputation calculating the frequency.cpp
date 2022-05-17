#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
const int N=1e5+7;
int hash[N];
int n;
cout<<"enter the size of arary\n";
cin>>n;
int a[n];
cout<<"enter the elements of array\n";
for(int i=0;i<n;i++){
    cin>>a[i];
    hash[a[i]]++;
}

int q;
cout<<"enter the queries\n";
cin>>q;
while(q--){
    int x;
    cout<<"enter the numbers whom you  want the frequency\n";
    cin>>x;
    cout<<hash[x]<<endl;
    }

   return 0;
}