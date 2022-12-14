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
    iota(all(v), 1);
    reverse(all(v));
    int i=n-1;
    while (n--) {
        for (auto i:v) {
            cout <<i <<sp;
        }
        cout <<nl;
        swap(v[i], v[i-1]);
        i--;
        //n--;
    }  
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
/*6 5 4 3 2 1
6 5 4 3 1 2
6 5 4 1 3 2
6 5 1 4 2 3
6 1 5 4 3 2
1 6 5 4 3 2*/