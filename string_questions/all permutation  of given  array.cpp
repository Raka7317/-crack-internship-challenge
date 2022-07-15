#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>permute(vector<int>& nums){
    vector<vector<int>>a;
    a.push_back({nums[0]});
    for(int i=1;i<nums.size();i++){
        vector<vector<int>>temp;
        for(int j=0;j<a.size();j++){
            auto y=a[j];
            int len=y.size();
            for(int k=0;k<=len;k++){
                y.insert(y.begin()+k,nums[i]);
                temp.push_back(y);
                y=a[j];
            }
        }
    }
        
        
        a=temp;
    }
    
    
    }
     return a;
}

int main(){
    vector<int>v={1,2,3};
    permute(v);
    return 0;
}
