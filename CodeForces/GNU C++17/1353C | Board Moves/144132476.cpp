#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll solve(ll n) {
    ll res = 0;
    for (ll i = 1; i <= n/2; i++)
    {
        res += i*i;
    }
    return 8*res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while (t--) {
        ll n;
        cin >>n;
        cout <<solve(n) <<endl;
    }
return 0;
}