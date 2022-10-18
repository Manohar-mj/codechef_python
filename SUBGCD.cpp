#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

using int64 = int64_t;
#define int int64
#define double long double
#define pt complex<double>
#define ax real()
#define ay imag()
     
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define vii vector<pii>

#define ff first
#define ss second
#define pf push_front
#define pb push_back
#define ppf pop_front()
#define ppb pop_back()
#define in insert
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define endl '\n'
#define MP make_pair
#define MSB(x) __lg(x)
#define LSB(x) (int)log2((x) & -(x))
#define SORT(x) is_sorted(all(x))
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define PRE(x, y) partial_sum(all(x), y.begin())
#define MEM(x, y) memset(x, y, sizeof(x))
#define CNT(x) __builtin_popcountll(x)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define bck(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define LEFT(a, l, r, k) rotate(a.begin() + l, a.begin() + l + (k % (r - l + 1)), a.begin() + r + 1)
#define RIGHT(a, l, r, k) rotate(a.begin() + l, a.begin() + r + 1 - (k % (r - l + 1)), a.begin() + r + 1)

/* --------------------------------------------------------- TEMPLATES --------------------------------------------------- */

class custom_hash{public: static uint64_t splitmix64(uint64_t x){ x += 0x9e3779b97f4a7c15; x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9; x = (x ^ (x >> 27)) * 0x94d049bb133111eb; return x ^ (x >> 31);}
    size_t operator()(uint64_t x) const {static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count(); return splitmix64(x + FIXED_RANDOM);}
};
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &in, pair<T1, T2> &p){ return (in >> p.first >> p.second);}
template<typename T> // cin >> vector<T>
istream& operator>>(istream &in, vector<T> &v){for(auto &it: v) cin >> it; return in;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &out, const pair<T1, T2> &p){return (out << p.first << " " << p.second); }
template<typename T> //cout << vector<T>
ostream& operator<<(ostream &out, const vector<T> &c){for (auto &it: c) cout << it << " "; return out;}

template<class T1, class T2 = vector<T1>, class T3 = less<T1>> 
ostream& operator<<(ostream& out, priority_queue<T1, T2, T3> const& pq){
    static priority_queue<T1, T2, T3> a = pq;
    out << "{"; string sep;
    while(!a.empty()){out << sep << a.top(); sep = ", "; a.pop();}
    return (out << "}");
}
template<class T> 
ostream& operator<<(ostream& out, queue<T> const& q){
    static queue<T> a = q;
    out << "{"; string sep;
    while(!a.empty()){out << sep << a.front(); sep = ", "; a.pop();}
    return (out << "}");
}
template<class T> 
ostream& operator<<(ostream& out, stack<T> const& s){
    static stack<T> a = s;
    out << "{"; string sep;
    while(!a.empty()){out << sep << a.top(); sep = ", "; a.pop();}
    return (out << "}");
}

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using vec = vector<vector<T>>;
template <typename T1, int T2> using var = vector<array<T1, T2>>;
template <typename T1, typename T2> using umap = unordered_map<T1, T2, custom_hash>;
template <typename T1, typename T2> using gphash = gp_hash_table<T1, T2, custom_hash>;
template <typename T1, typename T2> void amax(T1 &x, T2 y) {if(x < y) x = y;}
template <typename T1, typename T2> void amin(T1 &x, T2 y) {if(x > y) x = y;}

/* ----------------------------------------------------------- DEBUGGING AREA ------------------------------------------------------ */

void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void _print() {cerr << "]\n";}

template <typename T1, typename T2> void __print(const pair<T1, T2> &x) {cerr << '{'; __print(x.ff); cerr << ','; __print(x.ss); cerr << '}';}
template <typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
template <typename T1, typename... T2> void _print(T1 t, T2... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef Future_Legendary_Grand_Master
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

/* --------------------------------------------------------- UNIVERSAL CONSTANTS --------------------------------------------------- */

const double pi = acos((double)-1.0);
const double eps = 1e-9;
const int mod = 1e9 + 7;
const int mod2 = 998244353LL;
const int64 inf = 2e18;
const int64 INF = 9e18;
const int dx[16] = {1, 0, 0, -1, 1, 1, -1, -1, 2, 2, 1, 1, -1, -1, -2, -2};
const int dy[16] = {0, -1, 1, 0, -1, 1, -1, 1, -1, 1, -2, 2, -2, 2, -1, 1};

/* --------------------------------------------------------- USEFUL FUNCTIONS ---------------------------------------------------- */
int testcase;
int iseq(double x, double y) {return abs(x - y) < eps;}
bool isSquare(int x) {int y = sqrtl(x); return x == y * y;}
bool ispow2(int x) {return (x ? !(x & (x - 1)) : 0);}
int ceill(int x, int y) {return (x >= 0 ? (x + y - 1) / y : x / y);}
int floorr(int x, int y) {return x / y - ((x ^ y) < 0 and x % y);}
int gcd(int x, int y) {return (x ? gcd(y % x, x) : y);}
int lcm(int x, int y) {return x / gcd(x, y) * y;}
void google() {cout << "Case #" << ++testcase << ": ";}
int expo(int x, int y, int64 m = INF) {int res = 1; x = x % m; while (y > 0){if (y & 1) res = (res * x) % m; y = y >> 1LL, x = (x * x) % m;} return res;}
int inv(int n, int m) {return expo(n, m - 2, m);}
int gen(int x, int y) {srand(time(0)); return x + rand() % (y - x + 1);}

/* --------------------------------------------------------- FAST INPUT/OUTPUT ----------------------------------------------------- */

void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
    // #undef endl // uncomment for interactives
    // #undef int // uncomment for MLEs or TLEs
    // find_by_order(K): Returns an iterator to the Kth largest element (counting from zero)
    // order_of_key (K): Returns the number of items that are strictly smaller than K
}

/* ------------------------------------------------------- SOLUTION TO THE PROBLEM ------------------------------------------------- */

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    cin >> v;
    int g = 0;
    for (auto &e : v)
        g = gcd(g, e);
    cout << (g != 1 ? -1 : n) << endl;
}  

int32_t main()
{
    IOS();
    int ttc = 1;
    cin >> ttc;
    while (ttc--)
        solve();
    return 0;
}
