#include<bits/stdc++.h>
using namespace std;

void find_dublicate(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            cout<<it->first<<" "<< it->second<<"\n ";
        }
    }
}

int main(){
    string s="nitinsingh nini";
    find_dublicate(s);
    
    
    return 0;
}