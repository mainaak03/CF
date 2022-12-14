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
    int n, curr=0, res=0;
    cin >>n;
    string s;
    cin >>s;
    int k;
    cin >>k;
    vi v(26, 0);
    while (k--) {
        char c;
        cin >>c;
        v[c-'a']=1;
    }
    fi(i, 0, n) {
        if (v[s[i]-'a']) {
            res=max(curr, res);
            curr=1;
        }
        else curr++;
    }
    cout <<res <<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc=1;
    cin >>tc;
    while (tc--) {
        solve();
    }
}