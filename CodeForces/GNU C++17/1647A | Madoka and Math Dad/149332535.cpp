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
    int n, sum=0, i=0;
    cin >>n;
    vi v1, v2;
    while (sum<=1000) {
        if (i%2==0) {
            v1.pb(1);
            sum+=1;
        }
        else {
            v1.pb(2);
            sum+=2;
        }
        i++;
    }
    sum=0;
    i=0;
    while (sum<=1000) {
        if (i%2==0) {
            v2.pb(2);
            sum+=2;
        }
        else {
            v2.pb(1);
            sum+=1;
        }
        i++;
    }
    vi ans;
    sum=0;
    fi(i, 0, v2.size()) {
        ans.pb(v2[i]);
        sum+=v2[i];
        if (sum==n) {
            for (auto i:ans) {
                cout <<i;
            }
            cout <<endl;
            return;
        }
    }
    sum=0;
    ans.clear();
    fi(i, 0, v1.size()) {
        ans.pb(v1[i]);
        sum+=v1[i];
        if (sum==n) {
            for (auto i:ans) {
                cout <<i;
            }
            cout <<endl;
            return;
        }
    }
}
     
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc=1;
    cin >>tc;
    while (tc--) {
        solve();
    }
    return 0;
}