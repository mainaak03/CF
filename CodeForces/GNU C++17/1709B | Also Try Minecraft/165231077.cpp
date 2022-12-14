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
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
#define ss second
#define ff first
#define intio io<ll>();
#define chio io<char>();
#define strio io<string>();
template <typename T> T io() {T x; cin>>x; return x;}
/*------------------------------------*/
void solve() {
    ll n,m;
    cin>>n>>m;
    ll arr[n], d1[n], d2[n];
    fi(i,0,n) cin>>arr[i];
    d1[0]=d2[n-1]=0;
    fi(i,0,n-1) {
        if (arr[i]-arr[i+1]>0) d1[i+1]=arr[i]-arr[i+1];
        else d1[i+1]=0;
    }
    rfi(i,n-1,0) {
        if (arr[i]<arr[i+1]) d2[i]=abs(arr[i]-arr[i+1]);
        else d2[i]=0;
    }
    fi(i,1,n) {
        d1[i]+=d1[i-1];
    }
    rfi(i,n-1,0) {
        d2[i]+=d2[i+1];
    }
    while (m--) {
        int s,t;
        cin>>s>>t;
        if (s<t) {
            cout<<d1[t-1]-d1[s-1]<<nl;
        }
        else {
            cout<<d2[t-1]-d2[s-1]<<nl;
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
}