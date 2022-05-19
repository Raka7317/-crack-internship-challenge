#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        int l[n],r[n];
        int ma,mn;
        ma=l[0]=arr[0];
        mn=r[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            if(arr[i]>ma){
                ma=arr[i];
                l[i]=ma;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]>mn){
                mn=arr[i];
                r[i]=mn;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+min(l[i],r[i])-arr[i];
        }
         cout<<sum;
    }
   
    
    
    return 0;
}