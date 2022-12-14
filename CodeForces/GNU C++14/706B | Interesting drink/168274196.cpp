#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double db;
typedef float fl;
#define vi vector <int>
#define vll vector <long long>
#define sp " "
#define nl "\n"
#define fi(i, k, n) for (int i=k; i<n; i++)
#define rfi(i, n, k) for (int i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define vin(v) for (auto &i:v) {cin >>i;}
#define vout(v) for (auto i:v) {cout <<i <<sp;}
#define pll pair<ll,ll>
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
#define ss second
#define ff first
#define intio io<ll>();
#define chio io<char>();
#define strio io<string>();
template <typename T> T io() {T x; cin>>x; return x;}
bool isInt(db x) {return ceil(x)==floor(x);}
//floor(log10(n) + 1)+1  //number of digits
/*------------------------------------*/
//3 6 8 10 11
//
void solve() {
    int n, q;
 cin>>n;
 vi v(n);
 vin(v);
 sort(all(v));
 cin>>q;
 while (q--) {
  int cost;
  cin>>cost;
  if (cost<v[0]) cout<<0<<nl;
        else if (cost>=v[n-1]) cout<<n<<nl;
  else {
   auto it=upper_bound(all(v), cost);
            //if (cost == *it) cout<<it-v.begin()+1<<nl;
   cout<<it-v.begin()<<nl;
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