#include <bits/stdc++.h>
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
 
 
void solve(int id) {
 int n, m;
 cin>>n>>m;
 if (n<=3 and m<=3) cout<<ceil(n/2.0)<<sp<<ceil(m/2.0)<<nl;
 else cout<<1<<sp<<1<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc=1;
    cin >>tc;
 fi(i,0,tc) {
  solve(i+1);
 }
}