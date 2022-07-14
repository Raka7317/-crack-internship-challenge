#include<bits/stdc++.h>
using namespace std;

void count_say(int n){
    string s=to_string(n);
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    string p;
    for(auto it=mp.begin();it!=mp.end();it++){
      string t=to_string(it->second); 
     p=p+t;
     p=p+(it->first);
    }
    cout<< p;
}

int main(){

int n=111223334;
count_say(n);

return 0;
}