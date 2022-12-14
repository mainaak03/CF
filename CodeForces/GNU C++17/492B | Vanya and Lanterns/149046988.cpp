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
/*------------------------------------*/
void solve() {
    ll n, l, mx=INT_MIN, df=0, dl=0;
    double d;
    cin >>n >>l;
    vll v(n);
    vin(v);
    sort(all(v));
    fi(i, 0, n-1) {
        mx=max(mx, v[i+1]-v[i]);
    }
    d=(double)mx/2;
    d=max(d, (double)max(v[0], l-v[n-1]));
    cout <<fixed <<setprecision(9) <<d;
    //cout <<df <<sp <<dl <<sp <<d;
}
     
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc=1;
    //cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}