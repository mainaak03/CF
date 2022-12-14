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
    int n;
    cin >>n;
    vi v(n);
    vin(v);
    map<int, vi> mp;
    fi(i, 0, n) {
        mp[v[i]].push_back(i);
    }
    for (auto i:mp) {
        sort(all(i.second));
        if (i.second.back()-i.second.front()>=2) {
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";
}
        /*fi(j, 0, i.second.size()-1) {
            if (i.second[j+1]-i.second[j]>=2) {
                cout <<"YES\n";
                return;
            }
        }*/
     
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