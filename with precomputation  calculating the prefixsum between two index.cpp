#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];
int prefixsum[N];
int main(){
    
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
     cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    int q;
     cout<<"enter the queries\n";
    cin>>q;
    while(q--){
        int l,r;
         cout<<"enter the  l and r \n";
        cin>>l>>r;
        int sum=prefixsum[r]-prefixsum[l-1];
        cout<< "sum is " <<sum<<endl;
    }
    
    return 0;
}