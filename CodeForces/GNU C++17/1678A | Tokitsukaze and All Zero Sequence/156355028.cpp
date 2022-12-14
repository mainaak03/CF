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
/*------------------------------------*/
void solve() {
    int n, res;
    cin >>n;
    unordered_map<int,int> mp;
    fi(i, 0, n) {
        int t;
        cin >>t;
        mp[t]++;
    }
    if (mp[0]) {
        cout <<n-mp[0] <<nl;
        return;
    }
    for (auto i:mp) {
        if (i.second>1) {
            cout <<n <<nl;
            return;
        }
    }
    cout <<n+1 <<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc=1;
    cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}
/*
1 2 5 6 7
1 1 5 6 7
0 1 5 6 7
0 0 5 6 7
0 0 0 6 7
0 0 0 0 7
0 0 0 0 0
 
1 2 2 6 7
0 1 2 6 7
0 0 2 6 7
0 0 0 6 7
0 0 0 0 7
0 0 0 0 0 
 
0 0 1 3 6
0 0 0 3 6
0 0 0 0 6
0 0 0 0 0
*/