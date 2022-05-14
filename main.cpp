#include<bits/stdc++.h>
using namespace std;




int main(){
    
    vector<pair<int,int>v ;
    for(int i=0;i<v.size();i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    stack<pair<int,int>>s;
    s.push({v[0].first,v[0].second});
    for(int i=0;i<v.size();i++){
        int start1=s.top().first;
        int end1=s.top().second;
        int start2=v[i].first;
        int end2=v[i].second;
        
    }
    
    
    return 0;
}