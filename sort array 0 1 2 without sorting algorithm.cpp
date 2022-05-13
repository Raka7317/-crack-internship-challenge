#include<bits/stdc++.h>
using  namespace std;
  

int main(){
    
int t;
cout<<"enter the test cases ";
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int count1=0;
    int count2=0;
    int coutn3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
         count1++;
         if(arr[i]==1)
         count2++;
         if(arr[i]==2)
         count3++;
    }
    int k=0;
    
    for(int i=0;i<=count1;i++){
        arr[k++]=0;
    }
    for(int i=0;i<=count2;i++){
        arr[k++]=1;
    }
    for(int i=0;i<=count3;i++){
        arr[k++]=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
    
    
    
    
    return 0;
}