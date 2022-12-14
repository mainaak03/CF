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
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
/*------------------------------------*/
void solve() {
    ll n, m;
    cin >>n >>m;
    ll arr[n+1][m+1];
    fi(i, 1, n+1) {
        fi(j, 1, m+1) {
            cin >>arr[i][j];
        }
    }
    ll mx=0;
    fi(i, 1, n+1) {
        fi(j, 1, m+1) {
            ll sum=0, x=i, y=j;
            while (x>=1 and y<=m) {
                sum+=arr[x][y];
                x--;
                y++;
            }
            x=i; y=j;
            while (x<=n and y>=1) {
                sum+=arr[x][y];
                x++;
                y--;
            }
            x=i; y=j;
            while (x>=1 and y>=1) {
                sum+=arr[x][y];
                x--;
                y--;
            }
            x=i; y=j;
            while (x<=n and y<=m) {
                sum+=arr[x][y];
                x++;
                y++;
            }
            sum-=(3*arr[i][j]);
            mx=max(mx,sum);
        }
    }
    cout <<mx <<nl;
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