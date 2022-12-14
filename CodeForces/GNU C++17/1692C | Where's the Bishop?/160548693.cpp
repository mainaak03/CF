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
    char arr[8][8];
    fi(i, 0, 8) {
        fi(j, 0, 8) cin>>arr[i][j];
    }
    fi(i, 0, 7) {
        fi(j, 0, 7) {
            if (arr[i-1][j-1]=='#' and arr[i-1][j]=='.' and arr[i-1][j+1]=='#' and arr[i][j-1]=='.' and arr[i][j]=='#' and arr[i][j+1]=='.' and arr[i+1][j-1]=='#' and arr[i+1][j]=='.' and arr[i+1][j+1]=='#') {
                cout <<i+1 <<sp <<j+1 <<nl;
                return;
            }
        }
    }
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