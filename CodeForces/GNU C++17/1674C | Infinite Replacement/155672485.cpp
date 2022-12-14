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
const double pi = 3.141593;
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
    string s, t;
    cin >>s >>t;
    ll ns=s.size();
    ll nt=t.size();
    ll cnt=count(all(t), 'a');
    if (cnt>=1 and nt>1) {
        cout <<-1 <<nl;
    }
    else if (cnt==1) {
        cout <<1 <<nl;
    }
    else {
        cout <<(ll)pow(2ll,ns) <<nl;
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
}