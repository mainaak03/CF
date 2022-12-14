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
#define fi(k, n) for (int i=k; i<n; i++)
#define rfi(n, k) for (int i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define vin(v) for (auto &i:v) {cin >>i;}
#define pb(n) push_back(n)
#define mp(a, b) make_pair(a, b)
#define seti set <int>
#define setll set <ll>
/*------------------------------------*/
void solve() {
    string s;
    cin >>s;
    int n=s.length();
    vll adj, pref;
    fi(0, n-1) {
        if (s[i]==s[i+1]) {
            adj.pb(1);
        }
        else {adj.pb(0);}
    }
    int sum=0;
    pref.pb(0);
    fi(0, n-1) {
        sum+=adj[i];
        pref.pb(sum);
    }
    int l, r, m;
    cin >>m;
    while (m--) {
        cin >>l >>r;
        cout <<pref[r-1]-pref[l-1] <<nl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc;
    //cin >>tc;
    //while (tc--) {
        solve();
    //}
    return 0;
}