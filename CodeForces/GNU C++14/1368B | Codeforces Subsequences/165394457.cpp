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
#define vout(v) for (auto i:v) {cout <<i <<sp;}
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
/*------------------------------------*/
//n1*n2*n3*n4..nx=k
//n^10=k
void solve() {
    ll k=intio;
    ll mx, arr[10];
    string s="codeforces", res;
    if (k==1) {cout<<s; return;}
    if (isInt(pow((db)k,0.1))) {
        for (auto &i:arr) i=pow((db)k,0.1);
    }
    else {
        fi(i,0,40) {
            if (pow(i,10)<=k) {
                for (auto &j:arr) j=i;
                mx=i;
            }
        }
        ll p=pow(mx,10);
        while(1) {
            bool t=0;
            for (auto &i:arr) {
                if (p>=k) {
                    t=1;
                    break;
                }
                p/=i;
                i++;
                p*=i;
            }
            if (t) break;
        }
    }
    fi(i,0,10) {
        fi(j,0,arr[i]) {
            res.pb(s[i]);
        }
    }
    cout<<res;
    return;
    /*
    ll t=1;
    for (auto i:arr) cout<<i<<sp;
    for (auto i:arr) {
        t*=i;
    }
    cout<<t;
    */
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