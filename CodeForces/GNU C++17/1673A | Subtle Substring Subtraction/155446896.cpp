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
//#define mp(a, b) make_pair(a, b)
#define seti set <int>
#define setll set <ll>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
/*------------------------------------*/
void solve() {
    int t;
    cin >>t;
    while (t--) {
        ll alice=0, bob=0;
        string s;
        cin >>s;
        int n=s.size();
        if (n%2==0) {
            fi(i, 0, n) {
                alice+=(s[i]-'a'+1);
            }
        }
        else {
                if (s[n-1]>=s[0]) {
                fi(i, 1, n) {
                    alice+=(s[i]-'a'+1);
                }
                bob+=(s[0]-'a'+1);
            }
            else {
                fi(i, 0, n-1) {
                    alice+=(s[i]-'a'+1);
                }
                bob+=(s[n-1]-'a'+1);
            }
        }
        if (alice>bob) {
            cout <<"Alice "<<alice-bob<<nl;
        }
        else {
            cout <<"Bob "<<bob-alice<<nl;
        }
    }
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