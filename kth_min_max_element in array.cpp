#include<bits/stdc++.h>
using  namespace std;
  
void kthmaxmin(int arr[],int n,int k){
  priority_queue<int>mx;
  priority_queue<int,<vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        mx.push(arr[i]);
        pq.push(arr[i]);
        if(mx.size()>k){
            mx.pop();
        }
        if(pq.size()>k);
        pq.pop();
        
    }
    cout<<pq.top()<<" "<<mx.top()<<" \n";
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    
    int n=5;
    int arr[n]={1,2,3,4,5};
    int k=2;
    cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
    printarray(arr,n);
   
    kthmaxmin(arr,n,k);
    
    
    
    
    
    return 0;
}