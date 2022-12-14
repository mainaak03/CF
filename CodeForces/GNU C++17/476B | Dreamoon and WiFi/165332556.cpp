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
bool isInt(db x) {return ceil(x)==floor(x);}
int fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int nCr(int n, int r) {return fact(n)/(fact(r)*fact(n - r));}
/*------------------------------------*/
void solve() {
    string s, t;
    cin>>s>>t;
    int c1=0, c2=0, u=0, n=s.size();
    fi(i,0,n) {
        if (s[i]=='+') c1++;
        else c1--;
        if (t[i]=='+') c2++;
        else if (t[i]=='-') c2--;
        else u++;
    }
    db x=(db)(c1+u-c2)/2.0, y=(db)(c2+u-c1)/2.0;
    //cout<<c1<<sp<<c2<<sp<<u<<nl;
    //cout<<x<<sp<<y<<nl;
    if (x==0 or y==0) cout<<(db)1/(db)pow(2,u);
    else if (x<1 or y<1 or !isInt(x) or !isInt(y)) cout<<(db)0;
    else cout<<fixed<<setprecision(12)<<((db)nCr(u,x)/(db)(pow(2,u)));
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