/* https://www.codechef.com/problems/REDGREEN */
#include<bits/stdc++.h>
using namespace std;
#define mod2 998244353
#define int long long
int powmod(int a, int b,int mod){a%=mod;int res = 1;while(b>0){if(b&1)res=(res * a)%mod;a=(a*a)%mod;b >>= 1;}return res;}
int power(int a, int b){int res = 1;while(b>0){if(b&1)res=(res * a);a=(a*a);b >>= 1;}return res;}
int inv(int n){return powmod(n,mod2-2,mod2);}
int lol = 1e6 + 1;
vector<int> fft (lol, 0);
void solve() {
int a, b;
cin >> a >> b;
if ((a + b - 1) % 2 == 0) {
  int ans = fft[a + b - 2];
  ans = (ans * inv(fft[a - 1])) % mod2;
  ans = (ans * inv(fft[b - 1])) % mod2;
  ans = (ans * (fft[(a + b - 1)])) % mod2;
  ans = (ans * (inv(fft[(a + b - 1) / 2]))) % mod2;
  ans = (ans * (inv(fft[(a + b - 1) / 2]))) % mod2;
  int temp = (a * b) - (a + b - 1);
  ans = (ans * powmod(2,temp,mod2)) % mod2; 
  cout << ans % mod2<< endl;
}
else cout << 0 << endl;
}
int32_t main() {
        #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
freopen("error.txt","w",stderr);
#endif
int fac = 1;
fft[0] = 1;
fft[1] = 1;
for (int i = 1;i <= 1e6; i++) {
fac = (fac * i) % mod2;
fft[i] = fac % mod2;
}
int t = 1;
cin >> t;
for (int i = 1;i <= t; i++){
//cout << "Case #" << i << ": ";
solve();
}
}
