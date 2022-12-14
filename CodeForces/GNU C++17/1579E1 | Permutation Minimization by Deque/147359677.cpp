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
    int n;
    cin >>n;
    vi v(n);
    vin(v);
    if (n==1) {
        cout <<v[0] <<nl;
        return;
    }
    deque <int> d;
    int f=0, l=0;
    d.push_back(v[0]);
    if (v[1]<v[0]) {
        d.push_front(v[1]);
        f=v[1];
        l=v[0];
    }
    else {
        d.push_back(v[1]);
        f=v[0];
        l=v[1];
    }
    if (n>2) {
        fi(2, n) {
            if (v[i]<f) {
                d.push_front(v[i]);
                f=v[i];
            }
            else {
                d.push_back(v[i]);
                l=v[i];
            }
        }
    }
    for (auto i:d) {
        cout <<i <<sp;
    }
    cout <<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}