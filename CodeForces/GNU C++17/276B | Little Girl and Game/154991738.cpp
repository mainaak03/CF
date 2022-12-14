#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
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
#define seti set <int>
#define setll set <ll>
#define lmx LLONG_MAX
/*------------------------------------*/
unsigned long long f(unsigned long long n, vector<unsigned long long> &dp) {
    if (dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
unsigned long long f1(unsigned long long n) {
    if (n==1 or n==2) return 1;
    return f1(n-1)+f1(n-2);
}
void solve() {
    string s;
    cin >>s;
    unordered_map<char,int> ump;
    for (auto i:s) {
        ump[i]++;
    }
    int odd=0, even=0;
    for (auto i:ump) {
        if (i.second%2==0) even++;
        else odd++;
    }
    if (odd<=1) {
        cout <<"First\n";
    }
    else {
        if (odd%2==0) cout <<"Second\n";
        else cout <<"First\n";
    }
}
     
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc=1;
    //cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}