#include<bits/stdc++.h>
using namespace std;



void printarray(int  arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    
     int arr1[] = {1 ,2, 3, 4, 5};
     int arr2[] ={1 ,2 ,3};
  
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
   
     int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
     set<int>s;
     for(int i=0;i<n1;i++){
         s.insert(arr1[i]);
     }
     for(int i=0;i<n2;i++){
         s.insert(arr2[i]);
     }
    
    
     printarray(arr1,n1);
     printarray(arr2,n2);
     for(auto i=s.begin();i!=s.end();i++){
         cout<<*i<<" ";
     }
     

    
    
    return 0;
}