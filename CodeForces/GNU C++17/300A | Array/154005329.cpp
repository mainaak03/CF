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
void solve() {
    int n;
    cin >>n;
    vi v(n), pos, neg, z;
    int countPos=0, countNeg=0;
    fi(i, 0, n) {
        cin >>v[i];
        if (v[i]>0) countPos++;
        else if (v[i]<0) countNeg++;
    }
    if (countPos==0) {
        for (auto i:v) {
            if (pos.size()<2 and i!=0) {
                pos.pb(i);
            }
            else if (neg.size()<1 and i!=0) {
                neg.pb(i);
            }
            else {
                z.pb(i);
            }
        }
    }
    else {
        for (auto i:v) {
            if (i>0 and pos.size()<1) pos.pb(i);
            else if (i<0 and neg.size()<1) neg.pb(i);
            else z.pb(i); 
        }
    }
    cout <<neg.size() <<sp;
    for (auto i:neg) cout <<i <<sp;
    cout <<nl;
    cout <<pos.size() <<sp;
    for (auto i:pos) cout <<i <<sp;
    cout <<nl;
    cout <<z.size() <<sp;
    for (auto i:z) cout <<i <<sp;
    cout <<nl;
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