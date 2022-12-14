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
const ll MOD = 1000000007;
const double pi = acos(-1);
ll mod(ll a, ll b) {return ((a%b)+b)%b;}
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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
/*------------------------------------*/
 
void solve() {
    int arr[4][4];
    fi(i, 0, 4) {
        fi(j, 0, 4) {
            char c;
            cin >>c;
            if (c=='#') arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
    fi(i, 0, 3) {
        fi(j, 0, 3) {
            int sum=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
            if (sum!=2) {
                yes;
                return;
            }
        }
    }
    no;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc=1;
    //cin >>tc;
    while (tc--) {
        solve();
    }
}