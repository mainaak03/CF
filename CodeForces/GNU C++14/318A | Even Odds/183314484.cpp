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
 
// 1 3 5 7 9 2 4 6 8 10
// 1 3 5 7 9 11 2 4 6 8 10
void solve(int id) {
 ll n, k;
    cin>>n>>k;
    // cout<<ceil(999999999999/2.0); return;
    if (k<=ceil(n/2.0)) cout<<2*k-1;
    else cout<<2*(k-(ll)ceil(n/2.0));
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc=1;
    // cin >>tc;
 fi(i,0,tc) {
  solve(i+1);
 }
}