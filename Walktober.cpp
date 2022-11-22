/*John participates in an annual walking competition called Walktober. 
The competition runs for a total of N days and tracks the daily steps of the participants for all the N days.
 Each participant will be assigned a unique ID ranging from 1 to M where M is the total number of registered participants.
 A global scoreboard is maintained tracking the daily steps of each participant.
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int m,n,p;
    cin>>m>>n>>p;
    vector<vector<int>> v(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int sum=0;int k=p-1;vector<int> m1(n);
    for(int i=0;i<n;i++){
        m1[i]=v[0][i];
    }
    for(int i=1;i<m;i++){
        int max=0;
        for(int j=0;j<n;j++){
           if(v[i][j]>m1[j]){
            m1[j]=v[i][j];
           }
        }
    }
    for(int i=0;i<n;i++){
        if(m1[i]>v[k][i]){
            int diff=m1[i]-v[k][i];
            sum+=diff;
        }
    }
    cout<<sum<<ln;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}