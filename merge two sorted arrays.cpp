#include<bits/stdc++.h>
using namespace std;
 void mergearray(int arr1[], int arr2[], int n,int m){
     vector<int>v;
     int i=0;
     int j=0;
     while(i<n && j<m){
         if(arr1[i]==arr2[j]){
             v.push_back(arr1[i]);
             i++;
             j++;
         }
         else{
             if(arr1[i]>arr2[j]){
                 v.push_back(arr2[j]);
                 j++;
             }
             else{
                 v.push_back(arr1[i]);
                 i++;
             }
         }
     }
     while(i<n){
         v.push_back(arr1[i]);
         i++;
     }
     while(j<m){
         v.push_back(arr2[j]);
         j++;
     }
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
 }

int main(){
    int arr1[]={  0, 2, 6, 8, 9}  ;
    int arr2[]={1, 3,  7  };
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    mergearray(arr1,arr2,n1,n2);
    
    return 0;
}