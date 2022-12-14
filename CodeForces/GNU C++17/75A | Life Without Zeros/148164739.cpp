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
/*------------------------------------*/
void solve() {
    int a, b, c;
    cin >>a >>b;
    c=a+b;
    string p, q, r, t;
    t=to_string(a);
    fi(i, 0, t.size()) {
        if (t[i]!='0') {
            p.pb(t[i]);
        }
    }
    t=to_string(b);
    fi(i, 0, t.size()) {
        if (t[i]!='0') {
            q.pb(t[i]);
        }
    }
    t=to_string(c);
    fi(i, 0, t.size()) {
        if (t[i]!='0') {
            r.pb(t[i]);
        }
    }
    int a1, b1, c1;
    a1=stoi(p);
    b1=stoi(q);
    c1=stoi(r);
    if (a1+b1==c1) {
        cout <<"YES";
    }
    else {
        cout <<"NO";
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