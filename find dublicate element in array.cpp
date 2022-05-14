#include<bits/stdc++.h>
using namespace std;
void finddublicate(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if((*itr).second>1){
            cout<<(*itr).first<<" ";
        }
    }
}


int main(){
    int arr[]={  1, 5, 8, 10,3,1}  ;
    int n=sizeof(arr)/sizeof(arr[0]);
   finddublicate(arr,n);
    return 0;
}