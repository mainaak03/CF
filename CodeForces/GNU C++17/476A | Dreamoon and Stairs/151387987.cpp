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
void solve() {
    //a+b=km
    //a+2b=n
    int n, m, mn=INT_MAX;
    cin >>n >>m;
    for (int i=0; i<=n; i++) {
        if ((n-i)%2==0) {
            int b=(n-i)/2;
            if (ceil((double)(i+b)/m)==floor((double)(i+b)/m)) {
                mn=min(mn, (i+b));
            }
        }
    }
    if (mn==INT_MAX) {
        cout <<-1;
        return;
    }
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