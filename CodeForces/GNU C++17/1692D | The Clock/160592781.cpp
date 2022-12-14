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
#define pll pair<ll,ll>
#define lmx LLONG_MAX
#define yes cout <<"YES\n"
#define no cout <<"NO\n"
/*------------------------------------*/
bool ispal(string s) {
    string t=s;
    reverse(all(t));
    return t==s;
}
string convert(int hr, int min) {
    string s;
    if (to_string(hr).size()==1) {
        string t="0";
        t+=to_string(hr);
        s+=t;
    }
    else s+=to_string(hr);
    if (to_string(min).size()==1) {
        string t;
        t+='0';
        t+=to_string(min);
        s+=t;
    }
    else s+=to_string(min);
    return s;
}
 
void solve() {
    int hr, min, pd, cnt=0;
    pll t;
    char s;
    cin >>hr >>s >>min >>pd;
    int tmphr=pd/60;
    int tmpmin=pd%60;
    t.first=(ll)hr; t.second=(ll)min;
    int n=10;
    while (1) {
        string s=convert(hr,min);
        if (ispal(s)) cnt++;
        hr+=tmphr;
        hr%=24;
        min+=tmpmin;
        if (min>=60) {
            hr+=min/60;
            min%=60;
            hr%=24;
        }
        //cout <<hr <<sp <<min <<nl;
        if (t.first==hr and t.second==min) break;
    }
    cout <<cnt <<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc=1;
    cin >>tc;
    while (tc--) {
        solve();
    }
}