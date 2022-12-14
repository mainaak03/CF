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
    string s;
    cin >>s;
    map <char, int> mp;
    mp['r']=0;
    mp['g']=0;
    mp['b']=0;
    for (int i=0; i<6; i++) {
        if (s[i]=='r') {
            mp['r']++;
        }
        else if (s[i]=='g') {
            mp['g']++;
        }
        else if (s[i]=='b') {
            mp['b']++;
        }
        else if (s[i]=='R') {
            if (mp['r']==0) {
                cout <<"NO\n";
                return;
            }
        }
        else if (s[i]=='G') {
            if (mp['g']==0) {
                cout <<"NO\n";
                return;
            }
        }
        else if (s[i]=='B') {
            if (mp['b']==0) {
                cout <<"NO\n";
                return;
            }
        }
    }
    cout <<"YES\n";
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