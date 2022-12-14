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
void solve() {
    int n;
    ll ans, p1=LM, q1=LM, p2=LM, q2=LM;
    cin >>n;
    vll a(n), b(n);
    vin(a);
    vin(b);
    //a[0]-b[0], a[n-1]-b[n-1]
    ans=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
    //a[0]-b, b[0]-a, a[n-1]-b[n-1]
    //a[n-1]-b, b[n-1]-a, a[0]-b[0]
    //a[0]-b, a[n-1]-b, b[0]-a, b[n-1]-a
    //a[0]-b[n-1], b[0]-a[n-1]
    //b[0]-a[n-1], a[0]-b, b[n-1]-a
    //a[0]-b[n-1], b[0]-a, a[n-1]-b
    fi(i, 0, n) {
        p1=min(p1, abs(a[0]-b[i]));
        q1=min(q1, abs(b[0]-a[i]));
        p2=min(p2, abs(a[n-1]-b[i]));
        q2=min(q2, abs(b[n-1]-a[i]));
    }
    ans=min(ans, p1+q1+abs(a[n-1]-b[n-1]));
    ans=min(ans, p1+p2+q1+q2);
    ans=min(ans, abs(a[n-1]-b[0])+q2+p1);
    ans=min(ans, abs(a[0]-b[n-1])+abs(a[n-1]-b[0]));
    ans=min(ans, p2+q2+abs(a[0]-b[0]));
    ans=min(ans, abs(a[0]-b[n-1])+q1+p2);
    cout <<ans <<nl;
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