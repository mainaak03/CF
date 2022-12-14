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
#define fi(i, k, n) for (ll i=k; i<n; i++)
#define rfi(i, n, k) for (ll i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define vin(v) for (auto &i:v) {cin >>i;}
#define pb(n) push_back(n)
#define mp(a, b) make_pair(a, b)
#define seti set <int>
#define setll set <ll>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
/*------------------------------------*/
void solve() {
    unordered_map<string,ll> mp1;
    unordered_map<string,ll> mp2;
    ll n,res=0;
    cin >>n;
    vector<string> v(n);
    fi(i, 0, n) {
        string s;
        cin >>s;
        mp1[s]++;
        v[i]=s;
    }
    fi(i, 0, n) {
        string tmp=v[i];
        for (char c='a'; c<='k'; c++) {
            if (c==tmp[0]) continue;
            string s=tmp;
            s[0]=c;
            mp2[tmp]+=mp1[s];
        }
        for (char c='a'; c<='k'; c++) {
            if (c==tmp[1]) continue;
            string s=tmp;
            s[1]=c;
            mp2[tmp]+=mp1[s];
        }
    }
    for (auto i:mp2) {
        res+=i.second;
    }
    cout <<res/2 <<nl;
 
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