#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int nut=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            nut++;
        }
    }
    if(nut==0){
        cout<<0<<endl;
    }
    else{
        stack<int> s;
        int ans=1;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                if(!s.empty()){
                    ans*=(i-s.top());
                }
                s.push(i);
            }
        }
        cout<<ans<<endl;
    }
} 