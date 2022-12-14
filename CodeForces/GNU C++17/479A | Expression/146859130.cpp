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
#define fi(k, n) for (int i=k; i<n; i++)
#define rfi(n, k) for (int i=n-1; i>=k; i--)
#define all(v) v.begin(), v.end()
#define vin(v) for (auto &i:v) {cin >>i;}
#define pb(n) push_back(n)
#define mp(a, b) make_pair(a, b)
#define mapi map <int>
#define mapll map <ll>
#define seti set <int>
#define setll set <ll>
/*------------------------------------*/
void solve(int a, int b, int c) {
    vi v={a+b+c, (a*b)+c, a+(b*c), a*b*c, (a+b)*c, a*(b+c)};
    cout <<*max_element(all(v));
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    cin >>a >>b >>c;
    solve(a,b,c);
    return 0;
}