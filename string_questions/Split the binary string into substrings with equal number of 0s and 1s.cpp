#include<bits/stdc++.h>
using namespace std;


int binarystring(string s){
    int n=s.length();
    int c=0;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            x++;
        
        else
            y++;
        
        if(x==y)
            c++;
        
    }
    if(x!=y)
        return -1;
    
    return c;
}

int main(){
    
    string s="101010" ;
    cout<<binarystring(s);
    
    return 0;
}