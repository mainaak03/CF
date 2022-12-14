#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
 
typedef long int li;
typedef long long int ll;
typedef double db;
typedef long double ld;
typedef float fl;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define vi vector <int>
#define vl vector <long int>
#define vll vector <long long>
#define sp " "
#define nl "\n"
#define fi(i, k, n) for (int i=k; i<n; i++)
#define rfi(i, n, k) for (int i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define vin(v) for (auto &i:v) {cin >>i;}
#define pb(n) push_back(n)
#define mp(a, b) make_pair(a, b)
#define seti set <int>
#define setll set <ll>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
#define ss second
#define ff first
/*------------------------------------*/
void solve() {
    int n;
    cin >>n;
    vi v(n);
    vin(v);
    unordered_set<int> ust;
    for (auto i:v) ust.insert(i);
    int sz=ust.size();
    if (sz==n) cout <<n;
    else if (sz%2!=0 and n%2==0) cout <<sz-1;
    else if (sz%2==0 and n%2==0) cout <<sz;
    else if (sz%2==0 and n%2!=0) cout <<sz-1;
    else cout <<sz;
    cout <<nl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc=1;
    cin >>tc;
    while (tc--) {
        solve();
    }
}