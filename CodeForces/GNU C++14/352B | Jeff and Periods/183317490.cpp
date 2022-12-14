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
 
int chk(vi v) {
    int n=v.size();
    if (n==1) return 0;
    int d=v[1]-v[0];
    fi(i,0,n-1) {
        if (v[i+1]-v[i]!=d) return -1;
    }
    return d;
}
 
void solve(int id) {
 int n;
    cin>>n;
    unordered_map<int,vi> mp;
    fi(i,0,n) {
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    vector<p<int,int>> r;
    for (auto i:mp) {
        int d=chk(i.second);
        if (d>=0) r.push_back(make_pair(i.first,d));
    }
    sort(all(r));
    cout<<r.size()<<nl;
    for (auto i:r) cout<<i<<nl;
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