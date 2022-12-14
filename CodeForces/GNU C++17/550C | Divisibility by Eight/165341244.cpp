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
void solve() {
    string s;
    cin>>s;
    unordered_set<int> st;
    fi(i,0,1000) {
        if (i%8==0) st.insert(i);
    }
    int n=s.size(), res=0;
    for (auto t:st) {
        int j=0;
        string tmp=to_string(t);
        vi pos;
        for (int i=0; i<n and j<tmp.size(); i++) {
            if (tmp[j]==s[i]) {
                pos.pb(i);
                j++;
            }
        }
        if (j==tmp.size()) {
            yes;
            for (auto k:pos) {
                cout<<s[k];
            }
            return;
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