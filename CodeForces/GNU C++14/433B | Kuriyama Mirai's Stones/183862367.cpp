#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
typedef long long int ll;
typedef double db;
#define vi vector <int>
#define vll vector <long long>
#define p pair
#define sp " "
#define nl "\n"
#define fi(i, k, n) for (int i=k; i<n; i++)
#define rfi(i, n, k) for (int i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
bool isInt(db x) {return ceil(x)==floor(x);}
template<typename T> istream& operator>>(istream& in, vector<T>& a) {for(auto &x : a) in >> x; return in;};
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for(auto &x : a) out << x << ' '; return out;};
template<typename T1, typename T2> ostream& operator<<(ostream& out, const p<T1, T2>& x) {return out << x.first << ' ' << x.second;}
template<typename T1, typename T2> istream& operator>>(istream& in, p<T1, T2>& x) {return in >> x.first >> x.second;}
template<typename T> void Unique(T &a) {a.erase(unique(a.begin(), a.end()), a.end());}
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
void solve(int id) {
 int n, m, x, l, r;
    cin>>n;
    vll v(n), t;
    cin>>v;
    t=v;
    v.insert(v.begin(), 0);
    t.insert(t.begin(), 0);
    sort(all(t));
    partial_sum(all(v), v.begin());
    partial_sum(all(t), t.begin());
    cin>>m;
    while (m--) {
        cin>>x;
        cin>>l>>r;
        if (x==1) cout<<v[r]-v[l-1]<<nl;
        else cout<<t[r]-t[l-1]<<nl;
    }
    // cout<<v<<nl<<t;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // TxtIO
    int tc=1;
    // cin >>tc;
 fi(i,0,tc) {
  solve(i+1);
 }
}