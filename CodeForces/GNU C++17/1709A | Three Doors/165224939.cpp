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
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
#define ss second
#define ff first
#define intio io<ll>();
#define chio io<char>();
#define strio io<string>();
template <typename T> T io() {T x; cin>>x; return x;}
/*------------------------------------*/
/*
1
2 3 0
3 0 2
 
2
3 1 0
0 3 1
 
3
2 0 1
0 1 2
*/
void solve() {
    int x,p,q,r;
    cin>>x>>p>>q>>r;
    if (x==1) {
        if ((p==2 and q==3 and r==0) or (p==3 and q==0 and r==2)) yes;
        else no;
    }
    else if (x==2) {
        if ((p==3 and q==1 and r==0) or (p==0 and q==3 and r==1)) yes;
        else no;
    }
    else {
        if ((p==2 and q==0 and r==1) or (p==0 and q==1 and r==2)) yes;
        else no;
    }
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