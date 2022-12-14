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
#define lmx LLONG_MAX
/*------------------------------------*/
int f(int idx, int n, vi v, vi &dp) {
 if (idx>n-1) return 0;
 if (dp[idx]!=-1) return dp[idx];
 int tmp = v[idx]+f(idx+v[idx], n, v, dp);
 return dp[idx] = tmp;
}
void solve() {
 int n, ans=0;
 cin >>n;
 vi v(n);
 vin(v);
 vi dp(n, -1);
 
 for (int i=n-1; i>=0; i--) {
  dp[i]=v[i];
        int idx=i+v[i];
        if (idx<n) {
            dp[i]+=dp[idx];
        }
 }
 cout <<*max_element(all(dp)) <<nl;
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