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
 
 
void solve(int id) {
 int n, cnt=0;
    cin>>n;
    vector<p<int,int>> v(n);
    cin>>v;
    for (auto i:v) {
        bool ok1=0, ok2=0, ok3=0, ok4=0;
        for (auto j:v) {
            if (j.first>i.first and j.second==i.second) {
                ok1=1;
                break;
            }
        }
        for (auto j:v) {
            if (j.first<i.first and j.second==i.second) {
                ok2=1;
                break;
            }
        }
        for (auto j:v) {
            if (j.first==i.first and j.second<i.second) {
                ok3=1;
                break;
            }
        }
        for (auto j:v) {
            if (j.first==i.first and j.second>i.second) {
                ok4=1;
                break;
            }
        }
        // cout<<ok1<<sp<<ok2<<sp<<ok3<<sp<<ok4<<nl;
        if (ok1 and ok2 and ok3 and ok4) cnt++;
    }
    cout<<cnt;
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