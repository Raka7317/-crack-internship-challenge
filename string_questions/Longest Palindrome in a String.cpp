// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        if(s.length()<=1) return s;
        int  n=s.length();
        int maxlen=1;
        int  st=0;
        int end=0;
      
        
        
            for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(l>=0 and r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                    
                }
                else{
                    break;
                }
                int len=r-l-1;
                if(len>maxlen){
                    maxlen=len;
                    st=l+1;
                    end=r-1;
                }
            }
        }
        
        
                for(int i=0;i<n;i++){
            int l=i;
            int r=i+1;
            while(l>=0 and r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                    
                }
                else{
                    break;
                }
                int len=r-l-1;
                if(len>maxlen){
                    maxlen=len;
                    st=l+1;
                    end=r-1;
                }
            
        }
        }
    
    
    return s.substr(st,maxlen);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends