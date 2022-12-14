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
    string s;
    cin >>s;
    int n=s.size();
    string r=s.substr(1);
    if (islower(s[0])) {
        fi(i, 0, r.size()) {
            r[i]=toupper(r[i]);
        }
        if (r==s.substr(1)) {
            s[0]=toupper(s[0]);
            fi(i, 1, n) {
                s[i]=tolower(s[i]);
            }
            cout <<s;
            return;
        }
    }
    string t=s;
    fi(i, 0, n) {
        t[i]=toupper(t[i]);
    }
    //cout <<t; return;
    if (t==s) {
        fi(i, 0, n) {
            s[i]=tolower(s[i]);
        }
        cout <<s;
        return;
    }
    cout <<s;
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