#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    
    int l1=s.length();
    int l2=s.length();
    if(l1!=l2){
        cout<<"no";
    }
    else{
        string temp=s+s;
        if(temp.find(s2)!=string::npos){
            cout<<"yes";
        }
        else{
            cout<<"No";
        }
        
    }
    return 0;
    
}