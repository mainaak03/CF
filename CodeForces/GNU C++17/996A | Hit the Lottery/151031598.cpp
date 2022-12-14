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
#define LM LLONG_MAX
/*------------------------------------*/
int f(int n, vi &dp) {
    if (n<0) return INT_MAX;
    if (n==0) return 0;
    if (n==1) return 1;
    if (dp[n]!=-1) return dp[n];
    int p1=f(n-1, dp);
    int p2=f(n-5, dp);
    int p3=f(n-10, dp);
    int p4=f(n-20, dp);
    int p5=f(n-100, dp);
    int mn=1+min({p1,p2,p3,p4,p5});
    return dp[n]=mn;
}
 
void solve() {
    int n;
    cin >>n;
    int mn=0;
    mn+=n/100;
    n%=100;
    vi dp(n+1, -1);
    mn+=f(n, dp);
    cout <<mn;
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