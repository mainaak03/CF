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
 
bool comp(const p<char,int> &p1, const p<char,int> &p2) {
    return p1.second>p2.second;
}
 
void solve(int id) {
    ll n, k, sum=0, res=0;
    cin>>n>>k;
    string s, t;
    cin>>s;
    vi v(26, 0);
    fi(i,0,n) {
        v[s[i]-'A']++;
    }
    vector<p<char,ll>> freq;
    fi(i,0,26) {
        freq.push_back(make_pair('A'+i, v[i]));
    }
    sort(all(freq),comp);
    for (auto i:freq) {
        if (sum+i.second>=k) {
            res+=pow(k-sum, 2);
            break;
        }
        else {
            sum+=i.second;
            res+=pow(i.second, 2);
        }
    }
    cout<<res;
    // cout<<t; return;
    // cout<<freq;
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