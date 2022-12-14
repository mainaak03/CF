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
    int n, i, j;
    cin >>n;
    i=0;
    j=n-1;
    char a[n][n];
    set<char> dg, ndg;
    fi(p, 0, n) {
        fi(q, 0, n) {
            cin >>a[p][q];
            if (q==i or q==j) {
                dg.insert(a[p][q]);
                dg.insert(a[p][q]);
            }
            else {
                ndg.insert(a[p][q]);
            }
        }
        i++;
        j--;
    }
    if (dg.size()==1 and ndg.size()==1) {
        if (*dg.begin()!=*ndg.begin()) {
            cout <<"YES";
        }
        else {
            cout <<"NO";
        }
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