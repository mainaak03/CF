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
#define fi(i, k, n) for (ll i=k; i<n; i++)
#define rfi(i, n, k) for (ll i=n-1; i>=k; i--)
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
 
vll prime((int)1e6+1, 1);
 
void SieveOfEratosthenes()
{
    for (int p = 2; p * p <= prime.size(); p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= prime.size(); i += p)
                prime[i] = false;
        }
    }
}
 
void solve(int id) {
    SieveOfEratosthenes();
    unordered_set<int> st;
    fi(i,2,prime.size()) {
        if (prime[i]) st.insert(i);
    }
    int n;
    cin>>n;
    while (n--) {
        db x;
        cin>>x;
        if (isInt(sqrt(x))) {
            if (st.count((int)sqrt(x))) yes;
            else no;
        }
        else no;
    }
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