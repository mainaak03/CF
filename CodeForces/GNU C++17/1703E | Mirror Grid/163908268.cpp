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
#define useti unordered_set <int>
#define usetll unordered_set <ll>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
#define ss second
#define ff first
/*------------------------------------*/
void solve() {
    int n;
    cin>>n;
    char arr[n][n];
    fi(i, 0, n) {
        fi(j, 0, n) {
            cin>>arr[i][j];
        }
    }
    int c1=0, c2=0, cnt=0; 
    fi(i,0,n/2) {
        fi(j,i,n-i-1) {
            c1=c2=0;
            if (arr[i][j]=='1') c1++;
            else c2++;
            if (arr[j][n-i-1]=='1') c1++;
            else c2++;
            if (arr[n-i-1][n-j-1]=='1') c1++;
            else c2++;
            if (arr[n-j-1][i]=='1') c1++;
            else c2++;
            //cout<<c1<<sp<<c2<<nl<<nl;
            cnt+=min(c1,c2);
        }
    }
    cout<<cnt<<nl;
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