#include<bits/stdc++.h>
using namespace std;
void commonelement(int  arr1[],int arr2[],int arr3[],int n,int m,int p){
    unordered_map<int,int>mp1;
     unordered_map<int,int>mp2;
      unordered_map<int,int>mp3;

    for(int  i=0;i<n;i++){
        mp1[arr1[i]]++;
    }
     for(int  i=0;i<m;i++){
        mp2[arr2[i]]++;
    }
     for(int  i=0;i<p;i++){
        mp3[arr3[i]]++;
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(mp1[arr1[i]] and mp2[arr1[i]] and mp3[arr1[i]]){
            v.push_back(arr1[i]);
            mp1[arr1[i]]=0;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int arr1[]={1, 5, 10, 20, 40, 80};
    int arr2[]={6, 7, 20, 80, 100};
    int arr3[]={3, 4, 15, 20, 30, 70, 80, 120};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
     int n2=sizeof(arr2)/sizeof(arr2[0]);
      int n3=sizeof(arr3)/sizeof(arr3[0]);
    commonelement(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}