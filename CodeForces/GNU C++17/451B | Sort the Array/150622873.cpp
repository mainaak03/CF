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
#define LM LLONG_MAX
/*------------------------------------*/
void solve() {
    int n;
    cin >>n;
    vi v(n);
    vin(v);
    if (n==1) {
        cout <<"yes\n" <<1 <<sp <<1;
        return;
    }
    if (n==2) {
        if (v[0]>=v[1]) {
            cout <<"yes\n" <<1 <<sp <<2;
        }
        else {
            cout <<"yes\n" <<1 <<sp <<1;
        }
        return;
    }
    int l=0, r=n-1;
    fi(i, 0, n) {
        l=i;
        int j=i;
        while (j+1<n and v[j]>=v[j+1]) {
            r=j+1;
            j++;
        }
        if (j>i) {break;}
    }
    //cout <<l <<sp <<r;
    //return;
    reverse(v.begin()+l, v.begin()+r+1);
    if (is_sorted(all(v))) {
        cout <<"yes\n" <<l+1 <<sp <<r+1;
    }
    else {
        cout <<"no\n";
    }
}
     
int main() {
 /*#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif*/
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc=1;
    //cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}