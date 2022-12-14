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
//#define mp(a, b) make_pair(a, b)
#define seti set <int>
#define setll set <ll>
#define pll pair<ll,ll>
#define lmx LLONG_MAX
/*------------------------------------*/
void fac(int n, vi &v) {
    int j=2;
    while (n>1) {
        if (n%j==0) {
            v[j]++;
            n/=j;
        }
        else j++;
    }
}
 
void solve() {
    int n;
    cin >>n;
    string s, r;
    cin >>s;
    vi mp(8,0);
    for (auto i:s) {
        for (int j=1; j<=i-'0'; j++) {
            fac(j,mp);
        }
    }
    /*fi(i, 0, 8) {
        cout <<i <<sp <<mp[i] <<nl;
    }
    return;*/
    while (mp[2]) {
        int mx=0;
        fi(i, 2, 8) {
            if (mp[i]>0) {
                mx=max(mx,i);
            }
        }
        //cout <<mx<<nl;
        if (mx==7) {
            fi(i,0,mp[7]) {
                r+=(7+'0');
            }
            mp[5]-=mp[7];
            mp[3]-=(2*mp[7]);
            mp[2]-=(4*mp[7]);
            mp[7]=0;
        }
        else if (mx==5) {
            fi(i,0,mp[5]) {
                r+=(5+'0');
            }
            mp[3]-=mp[5];
            mp[2]-=(3*mp[5]);
            mp[5]=0;
        }
        else if (mx==3) {
            fi(i,0,mp[3]) {
                r+=(3+'0');
            }
            mp[2]-=mp[3];
            mp[3]=0;
        }
        else {
            fi(i, 0, mp[2]) {
                r+=(2+'0');
            }
            mp[2]=0;
        }
    }
    cout <<r;
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