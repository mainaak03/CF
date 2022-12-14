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
#define seti set <int>
#define setll set <ll>
/*------------------------------------*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >>tc;
    while (tc--) {
        int n;
        cin >>n;
        vi v(n);
        vin(v);
        int cnt=0;
        for (int i=1; i<n-1; i++) {
            if (v[i]>v[i-1] and v[i]>v[i+1]) {
                if (i<n-2) {
                    v[i+1]=max(v[i], v[i+2]);
                }
                else {
                    v[i+1]=v[i];
                }
                cnt++;
            }
        }
        cout <<cnt <<nl;
        for (auto i:v) {
            cout <<i <<sp;
        }
        cout <<nl;
    }
    return 0;
}