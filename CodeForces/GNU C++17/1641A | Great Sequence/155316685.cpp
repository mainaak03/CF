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
    ll n, x, cnt=0;
    cin >>n >>x;
    multiset<ll> st;
    while (n--) {
        ll t;
        cin >>t;
        st.insert(t);
    }
    while (st.size()) {
        for (auto i:st) {
            ll l=i;
            if (st.count(l*x)) {
                st.erase(st.lower_bound(l));
                st.erase(st.lower_bound(l*x));
                break;
            }
            else {
                st.erase(st.lower_bound(l));
                cnt++;
                break;
            }
        }
    }
    cout <<cnt <<nl;
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