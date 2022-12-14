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
#define pii pair<ll,ll>
#define lmx LLONG_MAX
/*------------------------------------*/
void solve() {
 ll n; cin>>n;
 vector<pii> a(n+1);
 
 fi(i,1,n+1){
  int x;
  cin>>x;
  a[i]={x,i};
 }
 sort(all(a));
 ll cnt=0;
 fi(i,1,n){
  fi(j,i+1,n+1){
    ll lhs=a[i].first*a[j].first;
    ll rhs=a[i].second+a[j].second;
    if(lhs==rhs) cnt++;
    if(lhs>= 2ll *n) {
        break;
    }
  }
 }
 cout<<cnt <<nl;
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
/*
min(i+j)=3
max(i+j)=2n-1
3,4,5,6,7,8.....2n-2,2n-1
*/