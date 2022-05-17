#include<bits/stdc++.h>
using namespace std;

void commonelement(int arr1[], int arr2[],int arr3[], int n1,int n2,int n3){
    int i,j,k=0;
    vector<int>v;
    while(i<n1 and j<n2 and k<n3){
        if(arr1[i]==arr2[j]==arr3[k]){
            v.push_back(arr1[i]);
            i++;
            j++;
            k++;
            
        }
        else if(arr1[i]<arr2[j]){
         i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
        int xx=arr1[i-1];
        while(xx=arr1[i]){
            i++;
        }
        int yy=arr2[j-1];
        while(yy=arr2[j]){
            j++;
        }
        int zz=arr3[k-1];
        while(zz=arr3[k]){
            k++;
        }
    }
    if(v.size()==0){
        cout<<"-1";
    }
    else{
        cout<<v.size();
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