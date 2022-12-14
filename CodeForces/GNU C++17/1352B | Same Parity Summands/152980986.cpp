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
 int n, k;
    cin >>n >>k;
    if ((n-k+1)>0 and (n-k+1)%2!=0) {
        cout <<"YES\n";
        fi(i, 1, k) {
            cout <<1 <<sp;
        }
        cout <<n-k+1 <<nl;
        return;
    }
    else if ((n-2*(k-1))>0 and (n-2*(k-1))%2==0) {
        cout <<"YES\n";
        fi(i, 1, k) {
            cout <<2 <<sp;
        }
        cout <<(n-2*(k-1)) <<nl;
        return;
    }
    cout <<"NO\n";
}
     
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